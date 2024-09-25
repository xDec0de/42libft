/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:37:27 by daniema3          #+#    #+#             */
/*   Updated: 2024/09/25 17:30:50 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/* LIBC FUNCTIONS */

/**
 * @brief Checks whether a character is alphabetic. Mimics
 * the `isalpha` function included by `ctype.h`.
 * 
 * Characters are considered to be alphabetic when
 * they are higher or equal to 'a' and lower or equal
 * to 'z', the same applies to upper case characters from
 * 'A' to 'Z'. ASCII values are used in order to determine
 * whether a character is alphabetic or o not.
 * 
 * @param c The `int` character to check.
 * 
 * @return 1 if `c` is an alphabetic character, 0 otherwise.
 */
int		ft_isalpha(int c);

/**
 * @brief Check whether a character is a digit. Mimics
 * the `isdigit`function included by `ctype.h`
 * 
 * Characters are considered to be digits when they
 * are higher or equal to `0` and lower or equal to
 * '9'. ASCII values are used in order to determine
 * whether a character is a digit or o not.
 * 
 * @param c The `int` character to check.
 * 
 * @return 1 if `c` is a digit, 0 otherwise.
 */
int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

size_t	ft_strlen(const char *str);

void	*ft_memset(void	*str, int c, size_t len);

void	ft_bzero(void	*str, size_t n);

/**
 * @brief Copies `n` bytes of memory from `src` to `dest`.
 * This function intentionally crashes if `src` is `NULL` or
 * `dest` is `NULL`, the only exception where it will not crash
 * is when both parameters are `NULL` and `n` is not 0, as it mimics the
 * `memcpy` function included by `string.h`. Also, this
 * function doesn't check if `n` is higher than the length
 * of `dest` or `src`.
 * 
 * @param dest The destination pointer at which to copy the
 * contents of `src`.
 * @param src The source pointer to get the content that will
 * then be copied to `dest`.
 * @param n The amount of bytes to copy.
 * 
 * @return `dest`, `NULL` only if both `dest` and `src` are
 * `NULL` and `n` is not 0.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

int		ft_toupper(int c);

int		ft_tolower(int c);

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int		ft_atoi(const char *str);

void	*ft_calloc(size_t count, size_t size);

char	*ft_strdup(const char *s);

/* ADDITIONAL FUNCTIONS */

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strtrim(char const *s1, char const *set);

char	**ft_split(const char *s, char c);

char	*ft_itoa(int n);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

/* BONUS FUNCTIONS */

/**
 * @brief Creates a new `t_list`, initializing
 * its `t_list::content` with the `content` parameter,
 * `t_list::next` will be `NULL`.
 * 
 * @param content The content to initialize
 * `t_list::content` with.
 * 
 * @return The new 't_list', `NULL` if `malloc` fails.
 */
t_list	*ft_lstnew(void *content);

void	ft_lstadd_front(t_list **lst, t_list *new);

int		ft_lstsize(t_list *lst);

t_list	*ft_lstlast(t_list *lst);

void	ft_lstadd_back(t_list **lst, t_list *new);

/**
 * @brief Deletes the provided `lst` element by using
 * the `del` function as well as `free` on it. This
 * function will do nothing if `lst` or `lst::content`
 * are `NULL`.
 * 
 * @param lst The `t_list` element to delete.
 * @param del The function to call on `lst`.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*));

/**
 * @brief Clears the provided `lst`. This is done by
 * iterating over `lst` to call `ft_lstdelone` on every
 * element of it, which calls the `del` function on the
 * element and frees it, skipping `NULL` content without
 * crashing.
 * 
 * @param lst The `t_list` to clear.
 * @param del The function to call on every element of
 * `lst`, used as a parameter for `ft_lstdelone`.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*));

/**
 * @brief Iterates over `lst`, executing the provided
 * function `f` until `lst::next` is `NULL`.
 * 
 * @param lst the `t_list` to iterate.
 * @param f the function to apply to each element of `lst`.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
