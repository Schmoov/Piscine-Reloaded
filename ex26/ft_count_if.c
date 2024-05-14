/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:22:17 by parden            #+#    #+#             */
/*   Updated: 2024/05/14 17:23:31 by parden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
/*
int	isemptystring(char*str)
{
    if (!str)
	return (0);
    return (!strlen(str));
}

int	istoolong(char*str)
{
    if (!str)
	return (0);
    return (strlen(str)>8);
}

int	main()
{
    char* tab[6]={NULL,"",NULL,"non","jpppppppppppppp","-42"};

    printf("%d\n",ft_count_if(tab, 6, &isemptystring));
    printf("%d\n",ft_count_if(tab, 6, &istoolong));
 
    tab[1]= "omgomgomgomg";

    printf("%d\n",ft_count_if(tab, 6, &isemptystring));
    printf("%d\n",ft_count_if(tab, 6, &istoolong));

}
*/
