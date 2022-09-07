/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngerng <jngerng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:15:12 by jngerng           #+#    #+#             */
/*   Updated: 2022/09/07 17:10:29 by jngerng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>

char	*ft_strcat(char *s1, char *s2);

int	main(int ac, char **av)
{
	int	i;
	
	if (ac == 3)
	{
		printf("%s\n", av[1]);
		printf("%s\n", av[2]);
		printf("%s\n", ft_strcat(&av[1][0], &av[2][0]));
	}
	else
		printf("write 2 strings");
}
