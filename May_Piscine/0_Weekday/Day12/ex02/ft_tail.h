/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 14:31:01 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/31 21:16:28 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <errno.h>

int		g_valid_num;
int		g_special_neg_space;
int		g_is_plus_zero;
int		file_size(int fd);
void	print_err_nm(char *file, int err);
void	print_name(char *file);
int		str_len(char *str);

#endif
