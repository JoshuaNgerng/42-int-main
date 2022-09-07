/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngerng <jngerng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:15:12 by jngerng           #+#    #+#             */
/*   Updated: 2022/09/07 16:56:14 by jngerng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(int ac, char **av)
{
	int		i;
	char	*o1;
	char	*o2;
	
	o1 = av[1];
	o2 = av[2];
	if (ac == 3)
	{
		i = ft_strncmp(&av[1][0], &av[2][0], 7);
		printf("(7) %d\n", i);
		printf("(7) %d\n", strncmp(o1, o2, 7));
	}
	else
		printf("write 2 strings");
}
