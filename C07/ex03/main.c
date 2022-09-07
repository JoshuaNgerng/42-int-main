/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngerng <jngerng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 09:52:35 by jngerng           #+#    #+#             */
/*   Updated: 2022/09/06 10:28:41 by jngerng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(int ac, char **av)
{
	int		i;
	char	*a;
	char 	*strs[ac - 1];
	char 	*sep;

	i = 1;
	while (i <= ac - 2)
	{
		strs[i - 1] = av[i];
		i ++;
	}
	sep = av[ac - 1];
	a = ft_strjoin(ac - 2, strs, sep);
	i = 1;
	while (i <= ac - 2)
	{
		printf("%s\n", strs[i - 1]);
		i ++;
	}
	printf("%s\n", sep);
	printf("%s\n", a);
	return (0);
}
