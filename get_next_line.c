/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:41:21 by seokchoi          #+#    #+#             */
/*   Updated: 2022/04/05 01:27:22 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_ckeck_newline(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_find_line(char **line, ssize_t rdsize)
{
	ssize_t	i;
	char	*tmp;

	tmp = *line;
	n_index = ft_ckeck_newline(*line);
	if (n_index >= 0)
	{
		tmp = ft_strl
	}
	else
	{

	}
	i = 0;
	*lin
	while ()
}


char	*get_next_line(int fd)
{
	char	*buf[BUFFER_SIZE + 1];
	char	*strs[OPEN_MAX];
	char	*tmp;
	ssize_t	rdsize;

	if (BUFFER_SIZE < 1 || fd < 0 || fd > OPEN_MAX)
		return (0);
	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (0);
	rdsize = read(fd, buf, O_RDONLY);
	while (rdsize > 0)
	{
		buf[rdsize] = '\0';
		if (!strs[fd])
			strs[fd] = ft_strdup("");
		if (!strs[fd])
			return (0);
		tmp = strs[fd];
		strs[fd] = ft_strjoin(tmp, buf);
		free(tmp);
		if (!str[fd])
			return (0);
		if (ft_ckeck_newline(strs[fd]) >= 0)
			break;
		rdsize = read(fd, buf, BUFFER_SIZE);
	}
	return (ft_find_line(&line[fd], rdsize));
}

int	main(void)
{
	int	fd;

	fd = open("./example/test1");
	close(fd);
	return (0);
}
