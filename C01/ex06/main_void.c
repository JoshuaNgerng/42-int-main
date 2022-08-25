/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_void.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngerng <jngerng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:15:12 by jngerng           #+#    #+#             */
/*   Updated: 2022/08/25 10:20:50 by jngerng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	int	X;
	char	c[] = "abcde";
	char	*x;

	x = &(c[0]);
	X = ft_strlen(x);
	printf("the string size is '%d'\n", X);
	return (0);
}
