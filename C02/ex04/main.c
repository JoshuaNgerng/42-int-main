/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngerng <jngerng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:01:30 by jngerng           #+#    #+#             */
/*   Updated: 2022/08/29 17:03:22 by jngerng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_str_is_lowercase(char *str);

int main(int argc, char **argv)
{
    char    *p;
    char    x;
    int i;

    if (argc == 2)
    {
        p = argv[1];
        i = ft_str_is_lowercase(p);
        if (i == 1)
            write(1, "the string is all lowercase\n", 27);
        else
            write(1, "the string have other stuff\n", 27);
    }
    else if (argc == 1)
        write(1, "please enter a string\n", 22);
    else
        write(1, "you have entered too many strings", 34);
    return (0);
}
