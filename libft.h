/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jony <jony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 17:04:08 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/04 22:02:02 by jony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_atoi(const char *str);
void ft_bzero(void *b, size_t len);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
char *ft_itoa(int n);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void ft_memdel(void **ap);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memset(void *b, int c, size_t len);
void ft_putchar_fd(char c, int fd);
void ft_putchar(char c);
void ft_putendl_fd(char const *s, int fd);
void ft_putendl(char const *s);
void ft_putnbr_fd(int n, int fd);
void ft_putnbr(int n);
void ft_putstr_fd(char const *s, int fd);
void ft_putstr(char const *s);
char *ft_strcat(char *dest, const char *src);
char *ft_strchr(const char *s, int c);
void ft_strclr(char *s);
int ft_strcmp(const char *s1, const char *s2);
char *ft_strcpy(char *dst, const char *src);
void ft_strdel(char **as);
char *ft_strdup(const char *src);
int ft_strequ(char const *s1, char const *s2);
void ft_striter(char *s, void (*f)(char *));
void ft_striteri(char *s, void (*f)(unsigned int, char *));
size_t ft_strlcat(char *dest, const char *src, size_t size);
size_t ft_strlen(const char *str);
char *ft_strmap(char const *s, char (*f)(char));
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char *ft_strncat(char *dest, const char *src, size_t len);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strncpy(char *dest, const char *src, size_t len);
int ft_strnequ(char const *s1, char const *s2, size_t n);
char *ft_strnew(size_t size);
char *ft_strnstr(const char *str, const char *to_find, size_t len);
char *ft_strrchr(const char *s, int c);
char **ft_strsplit(char const *s, char c);
char *ft_strsub(char const *s, unsigned int start, size_t len);
char *ft_strtrim(char const *s);
int ft_tolower(int c);
int ft_toupper(int c);
void *ft_memalloc(size_t size);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strstr(const char *str, const char *to_find);
int ft_isupper(int c);
int ft_islower(int c);

#endif
