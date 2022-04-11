/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:40:01 by seokchoi          #+#    #+#             */
/*   Updated: 2022/04/11 18:27:26 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
# include <fcntl.h>

// int	main(void)
// {
// 	printf("%s", get_next_line(0));
// 	return (0);
// }

int	main(int ac, char **av)
{
	int	fd;
	int	i;
	(void)ac;
	char *top;

	i = 0;
	fd = open(av[1], O_RDONLY);
	while (1)
	{
		top = get_next_line(fd);
		if (top)
			printf("%s", top);
		else
			break ;
	}
	return (0);
}
