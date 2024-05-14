/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:29:40 by parden            #+#    #+#             */
/*   Updated: 2024/05/14 16:05:11 by parden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while ((*str) != '\0')
	{
		ft_putchar(*str);
		++str;
	}
}
/*
int	main()
{
	char	*string;

	string = "Goodbye cruel world";
	ft_putstr(string);
}*/
