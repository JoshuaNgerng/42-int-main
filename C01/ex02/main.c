/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngerng <jngerng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 08:09:52 by jngerng           #+#    #+#             */
/*   Updated: 2022/08/25 08:13:18 by jngerng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int x;
	int y;

	x = 1;
	y = 2;
	printf("before: '%d', '%d'\n", x, y);
	ft_swap(&x, &y);
	printf("after: '%d', '%d'\n", x, y);
}
