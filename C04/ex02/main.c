/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngerng <jngerng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:19:52 by jngerng           #+#    #+#             */
/*   Updated: 2022/08/31 18:36:32 by jngerng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putnbr(int nb);

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	total;

	i = 0;
	sign = 1;
	total = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i ++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i ++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str [i] <= '9')
		{
			total = total * 10 + str[i] - 48;
			i ++;
		}
		else
			return (total * sign);
	}
	return (total * sign);
}

int	main(int argc, char *argv[])
{
	(void) argc;
	int x;

	x = ft_atoi(argv[1]);
	ft_putnbr(x);
	write(1, "\n", 1);
	return (0);
}
