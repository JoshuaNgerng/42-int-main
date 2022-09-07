/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngerng <jngerng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:11:42 by jngerng           #+#    #+#             */
/*   Updated: 2022/09/06 11:13:50 by jngerng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(int ac, char **av)
{
	unsigned int	n;
	char			*a;
	char			*b;
	char			*c;

	n = 5;
	a = av[1];
	b = av[2];
	printf("dest: %s\n", a);
	printf("src: %s\n", b);
	c = ft_strncpy(a, b, n);
	printf("final(5): %s\n", c);
}
