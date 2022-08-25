/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngerng <jngerng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 08:27:07 by jngerng           #+#    #+#             */
/*   Updated: 2022/08/25 08:31:03 by jngerng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_ultimate_ft(int *a, int *b);

int	main(void)
{
	int	x;
	int	y;

	x = 9;
	y = 4;
	printf("input: '%d', '%d'\n", x, y);
	ft_ultimate_ft(&x,&y);
	printf("divide: '%d', remainder: '%d'\n", x, y);
}
