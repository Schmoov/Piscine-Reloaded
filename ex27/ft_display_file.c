/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:39:27 by parden            #+#    #+#             */
/*   Updated: 2024/05/14 17:42:44 by parden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1048576

int	ft_display_file(const char *path)
{
	int				fd;
	unsigned char	buf[BUF_SIZE];
	int				bytes_read;

	bytes_read = BUF_SIZE;
	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (-1);
	while (bytes_read == BUF_SIZE)
	{
		bytes_read = read(fd, (void *)buf, BUF_SIZE);
		if (bytes_read == -1)
			return (-1);
		write(1, buf, bytes_read);
	}
	close(fd);
	return (0);
}

int	main(int argc, char **argv)
{
	int	all_good;

	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		all_good = ft_display_file(argv[1]);
		if (all_good == -1)
			write(2, "Cannot read file.\n", 18);
	}
}
