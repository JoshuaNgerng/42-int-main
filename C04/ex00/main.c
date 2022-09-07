/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngerng <jngerng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:14:47 by jngerng           #+#    #+#             */
/*   Updated: 2022/08/31 17:49:16 by jngerng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

void	ft_atoi_out(int n)
{
	char	o;

	if (n >= 10)
	{
		ft_atoi_out(n / 10);
		n = n % 10;
	}
	if (n < 10)
	{
		o = n + '0';
		write(1, &o, 1);
	}
}

int	main(int ac, char **av)
{
	int	o;

	(void) ac;
	o = ft_strlen(av[1]);
	ft_atoi_out(o);
}
