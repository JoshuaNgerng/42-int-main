/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngerng <jngerng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:15:12 by jngerng           #+#    #+#             */
/*   Updated: 2022/09/07 17:12:38 by jngerng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>

char	*ft_strncat(char *s1, char *s2, unsigned int n);

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%s\n", av[1]);
		printf("%s\n", av[2]);
		printf("(7) %s\n", ft_strncat(&av[1][0], &av[2][0], 7));
	}
	else
		printf("write 2 strings");
}
