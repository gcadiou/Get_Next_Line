/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 20:41:42 by gcadiou           #+#    #+#             */
/*   Updated: 2017/05/08 01:20:21 by gcadiou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "libft.h"
#include "get_next_line.h"

int	read_and_add(const int fd, t_gnl *gnl);

int	main(int argc, char **argv)
{
	int fd;
	int fd2;
	int fd3;
	int ret = 0;
	char *line;
	line = NULL;
	if(argc < 2)
		return (0);
	fd = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_RDONLY);
	fd3 = open(argv[3], O_RDONLY);
/*	gnl[fd].str_new = malloc(1);
	gnl[fd].str_new[0] = '\0';
	gnl[fd].str_old = malloc(1);
	gnl[fd].str_old[0] = '\0';
	write(1,"asd",3);*/
	while ((ret = get_next_line(fd2, &line)) > 0)
	{
		ft_putendl(line);
	}
	while ((ret = get_next_line(fd, &line))> 0)
	{
		ft_putendl(line);
	}
	while((ret = get_next_line(fd3, &line)) > 0)
	{
		ft_putendl(line);
	}
//	ft_putnbr(get_next_line(fd, &line));
//	ft_putstr(line);
/*	ft_putnbr(get_next_line(fd, &line));
	ft_putstr(line);
	ft_putnbr(get_next_line(fd, &line));
	ft_putstr(line);
	ft_putnbr(get_next_line(fd, &line));
	ft_putstr(line);*/
	//	while (get_next_line(fd2, &line))
//		ft_putstr(line);*/
/*	get_next_line(fd, &line);
	ft_putnbr(strcmp(line,"aaa"));
	get_next_line(fd, &line);
	ft_putnbr(strcmp(line,"bbb"));
	get_next_line(fd, &line);
	ft_putnbr(strcmp(line,"ccc"));
	get_next_line(fd, &line);
	ft_putnbr(strcmp(line,"ddd"));*/
	close(fd);
	close(fd2);
	close(fd3);
	return(0);
}
