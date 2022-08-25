/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngerng <jngerng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 08:14:15 by jngerng           #+#    #+#             */
/*   Updated: 2022/08/25 08:25:12 by jngerng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int x;
	int y;
	int *d;
	int *m;

	x = 9;
	y = 4;
	printf("input: '%d', '%d'\n", x, y);
	ft_div_mod(x, y, &x, &y);
	printf("divide: '%d', remainder: '%d'\n", x, y);
}
