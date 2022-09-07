/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngerng <jngerng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:08:39 by jngerng           #+#    #+#             */
/*   Updated: 2022/09/05 19:29:50 by jngerng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int		ft_ultimate_range(int **range, int min, int max);

void	print_int_arr(int *st, int s)
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

int		ft_atoi(char *str)
{
	int	total;
	int	sign;
	
	total = 0;
	sign = 1; 
	while (*str)
	{
		if (*str == '-')
			sign *= -1;
		if (*str >= '0' && *str <= '9')
			total = total * 10 + *str - 48;
		str ++;
	}
	return (total * sign);
}

int	main(int ac, char **av)
{
	int	mx;
	int mn;
	int	s;
	int	*out;
	
	if (ac == 3)
	{
		mx = ft_atoi(av[2]);
		mn = ft_atoi(av[1]);
		s = ft_ultimate_range(&out, mn, mx);
		print_int_arr(out, s);
	}
	else 
		printf("please key in two numbers");
	return (0);
}
