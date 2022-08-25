/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngerng <jngerng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 13:27:13 by jngerng           #+#    #+#             */
/*   Updated: 2022/08/25 13:31:58 by jngerng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	output(int *st, int s)
{
	int i;
	int o;

	i = 0;
	printf("[");
	while (i < s)
	{
		o = *st;
		printf("%d", o);
		if (i != (s - 1))
		{
			printf(", ");
		}
		i ++;
		st ++;
	}
	printf("]\n");
}

int	main(void)
{
	int	x[] = {-1, 44, 78, 89, 3, 89, -74, 3};
	int *p;
	int s;

	s = 8;
	p = &(x[0]);
	output(p, s);
	ft_sort_int_tab(x, s);
	output(p, s);
}
