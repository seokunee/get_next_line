/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:40:01 by seokchoi          #+#    #+#             */
/*   Updated: 2022/04/11 01:21:54 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
# include <fcntl.h>

int	main(int ac, char **av)
{
	int	fd;
	// char *buf[5];
	// int	size;
	int	i;
	(void)ac;

	i = 0;
	fd = open(av[1], O_RDONLY);
	// size = read(fd,buf,100);
	// buf[size] = 0;
	// printf("%s\n", buf);
	// get_next_line(fd);
	// get_next_line(fd);
	// get_next_line(fd);
	// get_next_line(fd);

	
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));


	// printf("\n-----\n");

	// strjoin test;
	// char s1[] = "1234";
	// char s2[] = "5678";
	// char *tmp;

	// tmp = ft_strjoin(s1, s2);
	// printf("%s\n", tmp);
	// free(tmp);

	close(fd);
	return (0);
}
