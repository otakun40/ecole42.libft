/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacoby <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:42:08 by pjacoby           #+#    #+#             */
/*   Updated: 2021/10/08 18:12:42 by pjacoby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H
size_t    ft_strlen(const char *s);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_atoi(const char *nptr);
int		ft_isascii(int c);
int     ft_isprint(int c);
size_t    ft_strlcpy(char *dst, const char *src, size_t size);
size_t    ft_strlcat(char *dst, const char *src, size_t size);
#endif
