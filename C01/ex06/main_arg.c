/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngerng <jngerng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:29:04 by jngerng           #+#    #+#             */
/*   Updated: 2022/08/25 11:35:16 by jngerng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(int argc, char *argv[])
{
    int	s;
	char    *x;

    x = argv[1];
    s = ft_strlen(x);
	printf("size of string is '%d'\n", s);
    return (0);
}
