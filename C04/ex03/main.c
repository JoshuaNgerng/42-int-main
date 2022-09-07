/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngerng <jngerng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:08:24 by jngerng           #+#    #+#             */
/*   Updated: 2022/08/31 19:03:46 by jngerng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str);

void	ft_putnbr(int nb)
{
	char	o;

	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	if (nb < 10)
	{
		o = nb + '0';
		write(1, &o, 1);
	}
}

int	main(int ac, char *av[])
{
	int	i;

	(void) ac;
	i = ft_atoi(av[1]);
	ft_putnbr(i);
	return (0);
}
