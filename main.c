/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:40:01 by seokchoi          #+#    #+#             */
/*   Updated: 2022/04/07 18:19:43 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	int	fd;
	char buf[5];
	int	size;
	int	i;
	(void)ac;

	i = 0;
	fd = open(av[1], O_RDONLY);
	size = read(fd,buf,100);
	// buf[size] = 0;
	printf("%s\n", buf);
	// printf("%s", get_next_line(fd));
	close(fd);
	return (0);
}
