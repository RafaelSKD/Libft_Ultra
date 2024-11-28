/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaefer <rafaefer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:17:03 by rafaefer          #+#    #+#             */
/*   Updated: 2024/07/29 13:15:20 by rafaefer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	gnl_free_memory(char **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
	}
}

char	*gnl_create_txt(char *txt)
{
	txt = (char *)malloc(1);
	if (!txt)
		return (NULL);
	txt[0] = '\0';
	return (txt);
}

char	*gnl_read_file(int fd, char *txt)
{
	char	*buffer;
	ssize_t	bytes_read;
	char	*temp;

	if (!txt)
		txt = gnl_create_txt(txt);
	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	while (gnl_strrchr(txt, '\n') == NULL)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read <= 0)
			break ;
		buffer[bytes_read] = '\0';
		temp = gnl_strjoin(txt, buffer);
		gnl_free_memory(&txt);
		if (!temp)
			return (free(buffer), NULL);
		txt = temp;
	}
	free(buffer);
	return (txt);
}

char	*gnl_get_line(char *txt)
{
	size_t	len;
	char	*line;

	len = 0;
	if (!txt[0])
		return (NULL);
	while (txt[len] && txt[len] != '\n')
		len++;
	if (txt[len] == '\n')
		len++;
	line = (char *)malloc(len + 1);
	if (!line)
		return (NULL);
	gnl_strncpy(line, txt, len);
	line[len] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*txt = NULL;
	char		*line;
	char		*temp;

	if (fd < 0)
		return (NULL);
	txt = gnl_read_file(fd, txt);
	if (!txt)
		return (NULL);
	line = gnl_get_line(txt);
	if (!line)
	{
		gnl_free_memory(&txt);
		return (NULL);
	}
	temp = gnl_strdup(txt + gnl_strlen(line));
	gnl_free_memory(&txt);
	if (!temp)
		return (NULL);
	txt = temp;
	return (line);
}
//
//int main(void)
//{
//    int fd;
//    char *line;
//	
//	fd = open("test.txt", O_RDONLY);
//	line = get_next_line(fd);
//	printf("%s", line);
//	free(line);
//    return 0;
//}
