/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngerng <jngerng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:44:15 by jngerng           #+#    #+#             */
/*   Updated: 2022/08/25 17:53:55 by jngerng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	a[] = "asdfghj";
	char	b[] = "tyu";

	printf("%s\n", a);
	printf("%s\n", b);
	printf("%s\n", ft_strcpy(b, a));
	printf("%s\n", b);
	return (0);
}
