/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngerng <jngerng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 13:05:30 by jngerng           #+#    #+#             */
/*   Updated: 2022/08/25 13:22:31 by jngerng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

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
	int	i[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *x;
	int s;

	s = 10;
	x = &(i[0]);
	output(x, s);
	ft_rev_int_tab(x, s);
	output(x, s);
}
