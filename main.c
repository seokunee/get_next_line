/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:40:01 by seokchoi          #+#    #+#             */
/*   Updated: 2022/04/06 20:37:56 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	int	fd;

	fd = open("./example/test1", O_RDONLY);
	printf("%d", get_next_line(fd));
	close(fd);
	return (0);
}