/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngerng <jngerng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:26:36 by jngerng           #+#    #+#             */
/*   Updated: 2022/09/07 14:55:49 by jngerng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str);

void	write_string(char *p)
{
	char	o;
	int i;

	i = 0;
	while (p[i] != '\0')
	{
		o = p[i];
		write(1, &o, 1);
		i ++;
	}
}

int main (int argc, char **argv)
{
    if (argc == 2)
    {
		write_string(&argv[1][0]);
		write(1, "\n", 1);
		ft_strupcase(&argv[1][0]);
		write_string(&argv[1][0]);
		write(1, "\n", 1);
    }
    else if (argc == 1)
        write(1, "please enter a string\n", 22);
    else
        write(1, "you have entered too many strings", 34);
    return (0);
}
