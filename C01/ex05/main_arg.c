/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngerng <jngerng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 08:32:53 by jngerng           #+#    #+#             */
/*   Updated: 2022/08/25 11:25:59 by jngerng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_putstr(char *str);

int	main(int argc, char *argv[])
{
	char	*x;

	x = argv[1];
	ft_putstr(x);
	return (0);
}
