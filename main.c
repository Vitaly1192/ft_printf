/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:52:56 by dwinky            #+#    #+#             */
/*   Updated: 2021/01/02 20:24:32 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

void		test_d(int n)
{
	ft_printf("|%*.*d|\n", 0, 0, 0 * n);
	   printf("|%*.*d|\n", 0, 0, 0 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", 1, 0, 0 * n);
	   printf("|%*.*d|\n", 1, 0, 0 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", 0, 1, 0 * n);
	   printf("|%*.*d|\n", 0, 1, 0 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", 0, 0, 1 * n);
	   printf("|%*.*d|\n", 0, 0, 1 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", 1, 0, 1 * n);
	   printf("|%*.*d|\n", 1, 0, 1 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", 0, 1, 1 * n);
	   printf("|%*.*d|\n", 0, 1, 1 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", 1, 1, 0 * n);
	   printf("|%*.*d|\n", 1, 1, 0 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", 0, 0, 123 * n);
	   printf("|%*.*d|\n", 0, 0, 124 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", -0, 10, 123 * n);
	   printf("|%*.*d|\n", -0, 10, 124 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", 0, 10, 123 * n);
	   printf("|%*.*d|\n", 0, 10, 124 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", 1, -10, 123 * n);
	   printf("|%*.*d|\n", 1, -10, 124 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", 4, 3, 123 * n);
	   printf("|%*.*d|\n", 4, 3, 124 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", 3, 3, 123 * n);
	   printf("|%*.*d|\n", 3, 3, 124 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", -3, 1, 123 * n);
	   printf("|%*.*d|\n", -3, 1, 124 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", -3, 10, 123 * n);
	   printf("|%*.*d|\n", -3, 10, 124 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", 10, 10, 123 * n);
	   printf("|%*.*d|\n", 10, 10, 124 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", 1, 10, INT_MAX * n);
	   printf("|%*.*d|\n", 1, 10, INT_MAX * n);
	printf("===\n");
	ft_printf("|%-*.*d|\n", 1, 1, 0 * n);
	   printf("|%-*.*d|\n", 1, 1, 0 * n);
	printf("===\n");
	ft_printf("|%-*.*d|\n", 1, -10, 123 * n);
	   printf("|%-*.*d|\n", 1, -10, 124 * n);
	printf("===\n");
	ft_printf("|%-*.*d|\n", 4, 3, 123 * n);
	   printf("|%-*.*d|\n", 4, 3, 124 * n);
	printf("===\n");
	ft_printf("|%-*.*d|\n", 3, 3, 123 * n);
	   printf("|%-*.*d|\n", 3, 3, 124 * n);
	printf("===\n");
	ft_printf("|%-*.*d|\n", -3, 1, 123 * n);
	   printf("|%-*.*d|\n", -3, 1, 124 * n);
	printf("===\n");
	ft_printf("|%-*.*d|\n", -3, 10, 123 * n);
	   printf("|%-*.*d|\n", -3, 10, 124 * n);
	printf("===\n");
	ft_printf("|%-*.*d|\n", 10, 10, 123 * n);
	   printf("|%-*.*d|\n", 10, 10, 124 * n);
	printf("===\n");
	ft_printf("|%-*.*d|\n", 1, 10, INT_MAX * n);
	   printf("|%-*.*d|\n", 1, 10, INT_MAX * n);
	printf("===\n");
	// ft_printf("|%*.*d|\n", 1, 16, -INT_MAX - 1);
	//    printf("|%*.*d|\n", 1, 16, -INT_MAX - 1);
	// printf("===\n");
	// ???????????????????????
	// ft_printf("|%*.*d|\n", 1, 10, INT_MIN);
	//    printf("|%*.*d|\n", 1, 10, INT_MIN);
	// printf("===\n");
	ft_printf("|%*d|\n", 10, 123 * n);
	   printf("|%*d|\n", 10, 124 * n);
	printf("===\n");
	ft_printf("|%*d|\n", 1, 123 * n);
	   printf("|%*d|\n", 1, 124 * n);
	printf("===\n");
	ft_printf("|%*d|\n", 3, 123 * n);
	   printf("|%*d|\n", 3, 124 * n);
	printf("===\n");
	ft_printf("|%*d|\n", 4, 123 * n);
	   printf("|%*d|\n", 4, 124 * n);
	printf("===\n");
	ft_printf("|%-*d|\n", 10, 123 * n);
	   printf("|%-*d|\n", 10, 124 * n);
	printf("===\n");
	ft_printf("|%-*d|\n", 3, 123 * n);
	   printf("|%-*d|\n", 3, 124 * n);
	printf("===\n");
	ft_printf("|%-*d|\n", 4, 123 * n);
	   printf("|%-*d|\n", 4, 124 * n);
	printf("===\n");
	ft_printf("|%-*d|\n", 5, 123 * n);
	   printf("|%-*d|\n", 5, 124 * n);
	printf("===\n");
	ft_printf("|%-*d|\n", 3, -123 * n);
	   printf("|%-*d|\n", 3, -124 * n);
	printf("===\n");
	ft_printf("|%-*d|\n", 4, -123 * n);
	   printf("|%-*d|\n", 4, -124 * n);
	printf("===\n");
	ft_printf("|%----*d|\n", 10, 123 * n);
	   printf("|%----*d|\n", 10, 124 * n);
	printf("===\n");
	ft_printf("|%-----*d|\n", 10, 123 * n);
	   printf("|%-----*d|\n", 10, 124 * n);
	printf("===\n");
	ft_printf("|%-------------.*d|\n", 10, 123 * n);
	   printf("|%-------------.*d|\n", 10, 124 * n);
	printf("===\n");
	ft_printf("|%0*d|\n", 10, 123 * n);
	   printf("|%0*d|\n", 10, 124 * n);
	printf("===\n");
	ft_printf("|%0*d|\n", 1, 123 * n);
	   printf("|%0*d|\n", 1, 124 * n);
	printf("===\n");
	ft_printf("|%0*d|\n", 3, 123 * n);
	   printf("|%0*d|\n", 3, 124 * n);
	printf("===\n");
	ft_printf("|%0*d|\n", 4, 123 * n);
	   printf("|%0*d|\n", 4, 124 * n);
	printf("===\n");
	ft_printf("|%0*d|\n", 10, 123 * n);
	   printf("|%0*d|\n", 10, 124 * n);
	printf("===\n");
	ft_printf("|%0*d|\n", 3, 123 * n);
	   printf("|%0*d|\n", 3, 124 * n);
	printf("===\n");
	ft_printf("|%0*d|\n", 4, 123 * n);
	   printf("|%0*d|\n", 4, 124 * n);
	printf("===\n");
	ft_printf("|%0*d|\n", 5, 123 * n);
	   printf("|%0*d|\n", 5, 124 * n);
	printf("===\n");
	ft_printf("|%0*d|\n", 3, -123 * n);
	   printf("|%0*d|\n", 3, -124 * n);
	printf("===\n");
	ft_printf("|%0*d|\n", 4, -123 * n);
	   printf("|%0*d|\n", 4, -124 * n);
	printf("===\n");
	ft_printf("|%00000*d|\n", 10, 123 * n);
	   printf("|%00000*d|\n", 10, 124 * n);
	printf("===\n");
	ft_printf("|%000000000000000*d|\n", 10, 123 * n);
	   printf("|%000000000000000*d|\n", 10, 124 * n);
	printf("===\n");
	ft_printf("|%000000000000.*d|\n", 10, 123 * n);
	   printf("|%000000000000.*d|\n", 10, 124 * n);
	printf("===\n");

	// ft_printf("|%-------------.*d, %d, %d, 1.4%d, 4.1%d1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./!@#$^&*()_+QWERTYUIOP{}ASDFGHJKL:ZXCVBNM<>?\t\f|\n", 10, 123, 0, -1234567890, -42, -21);
	//    printf("|%-------------.*d, %d, %d, 1.4%d, 4.1%d1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./!@#$^&*()_+QWERTYUIOP{}ASDFGHJKL:ZXCVBNM<>?\t\f|\n", 10, 123, 0, -1234567890, -42, -21);
	// printf("===\n");
}
int		main(void)
{
	int ft_z;
	int z;

	ft_z = 0;
	z = 0;
	// Проверить!!!
	// printf("|%-0d|\n", 124);
/*
	printf("%d\n", 42);
	printf("%i\n", 42);
	printf("%D\n", 42);
	printf("%dd\n", 0);
	printf("%ddd\n", -42);
	printf("%d\n", 1234567890);
	printf("%c, %-c, %c\n", 'a', 'b', 'c');
	printf("%c, %d, %c, %d\n", 'a', 1, 'b', 2);
	printf("%s\n", "hello");
	printf("%s%s%s\n", "print", "", "f");
	printf("%s%s%c\n", "lo", NULL, 'l');
	printf("%s\n", "%");
	printf("%s_%d\n", "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%X", 42);
*/
	test_d(-1);
	test_d(1);
/*
	ft_z = ft_printf("");
	z =       printf("");
	printf("ft_z == %d\nz == %d\n===\n", ft_z, z);
*/
	return (0);
}
