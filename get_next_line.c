/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:41:21 by seokchoi          #+#    #+#             */
/*   Updated: 2022/04/06 20:35:39 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_str_free(char *str)
{
	free(str);
	str = NULL;
}

int	ft_ckeck_newline(char *str)
{
	int	i;

	if (!str || !(*str))
		return (-1);
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

char	*find_line_and_update_str(char **line, ssize_t rdsize)
{
	char	*tmp;
	char	*top_line;
	int		n_index;
	
	if (rdsize < 0)
		return (NULL);
	tmp = *line;
	n_index = ft_ckeck_newline(*line);
	if (n_index >= 0)
	{
		top_line = ft_substr(*line, 0, n_index + 1);
		if (!top_line)
			return (NULL);
		*line = ft_substr(*line, n_index + 1, ft_strlen(*line));
		if (!(*line))
			return (NULL);
	} 
	else
	{
		top_line = ft_substr(*line, 0, ft_strlen(*line));
		ft_str_free(*line);
	}
	return (top_line);
}

char	*get_next_line(int fd)
{
	char		*buf;
	static char	*strs[OPEN_MAX];
	char		*tmp;
	ssize_t		rdsize;

	if (BUFFER_SIZE < 1 || fd < 0 || fd > OPEN_MAX)
		return (0);
	if (BUFFER_SIZE > SIZE_MAX)
		buf = (char *)malloc(sizeof(char) * (SIZE_MAX + 1));
	else
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
		if (!strs[fd])
			return (0);
		ft_str_free(tmp);
		if (ft_ckeck_newline(strs[fd]) >= 0)
			break;
		rdsize = read(fd, buf, BUFFER_SIZE);
	}
	return (find_line_and_update_str(&strs[fd], rdsize));
}
