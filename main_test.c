/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micorrei <micorrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:22:15 by micorrei          #+#    #+#             */
/*   Updated: 2025/04/24 14:48:26 by micorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int x = 42;
    char *str = "hello world";

    ft_printf("My number: %d\n", x);
	printf("Real printf: %d\n", x);
    ft_printf("String: %s\n", str);
	printf("Real printf string: %s\n", str);
    ft_printf("Char: %c\n", 'A');
	printf("Real printf char: %c\n", 'A');
    ft_printf("Unsigned: %u\n", 3000000000u);
	printf("Real printf unsigned: %u\n", 3000000000u);
	ft_printf("Unsigned_neg: %u\n", -300);
	printf("Real printf unsigned_neg: %u\n", -300);
    ft_printf("Hex (lower): %x\n", 255);
	printf("Real printf hex(lower): %x\n", 255);
    ft_printf("Hex (upper): %X\n", 255);
	printf("Real printf hex(upper): %X\n", 255);
    ft_printf("Pointer: %p\n", str);
	printf("Real printf pointer: %p\n", str);
    ft_printf("Percent: %%\n");
	printf("Real printf percentage: %%\n");

	printf("\n\n\n===== EDGE CASES TESTING =====\n");

	int		ft_ret, std_ret;
	char	c = '\0'; // Null character
	char	*empty_str = ""; // Empty string
	char	*null_str = NULL; // Null string
	void	*null_ptr = NULL; // Null pointer
	int		min_int = -2147483648; // Minimum int
	int		max_int = 2147483647;  // Maximum int
	unsigned int uint_zero = 0;    // Unsigned zero
	unsigned int uint_max = 4294967295; // Max unsigned int
	int		zero = 0;

	// Test %c with null character
	printf("\nTesting %%c with null character:\n");
	std_ret = printf("printf:    [%c]\n", c);
	ft_ret = ft_printf("ft_printf: [%c]\n", c);
	printf("Return values: printf = %d, ft_printf = %d\n", std_ret, ft_ret);

	// Test %s with empty string
	printf("\nTesting %%s with empty string:\n");
	std_ret = printf("printf:    [%s]\n", empty_str);
	ft_ret = ft_printf("ft_printf: [%s]\n", empty_str);
	printf("Return values: printf = %d, ft_printf = %d\n", std_ret, ft_ret);

	// Test %s with null string
	printf("\nTesting %%s with null string:\n");
	std_ret = printf("printf:    [%s]\n", null_str);
	ft_ret = ft_printf("ft_printf: [%s]\n", null_str);
	printf("Return values: printf = %d, ft_printf = %d\n", std_ret, ft_ret);

	// Test %p with null pointer
	printf("\nTesting %%p with null pointer:\n");
	std_ret = printf("printf:    [%p]\n", null_ptr);
	ft_ret = ft_printf("ft_printf: [%p]\n", null_ptr);
	printf("Return values: printf = %d, ft_printf = %d\n", std_ret, ft_ret);

	// Test %d with minimum integer
	printf("\nTesting %%d with minimum integer:\n");
	std_ret = printf("printf:    [%d]\n", min_int);
	ft_ret = ft_printf("ft_printf: [%d]\n", min_int);
	printf("Return values: printf = %d, ft_printf = %d\n", std_ret, ft_ret);

	// Test %d with maximum integer
	printf("\nTesting %%d with maximum integer:\n");
	std_ret = printf("printf:    [%d]\n", max_int);
	ft_ret = ft_printf("ft_printf: [%d]\n", max_int);
	printf("Return values: printf = %d, ft_printf = %d\n", std_ret, ft_ret);

	// Test %u with zero
	printf("\nTesting %%u with zero:\n");
	std_ret = printf("printf:    [%u]\n", uint_zero);
	ft_ret = ft_printf("ft_printf: [%u]\n", uint_zero);
	printf("Return values: printf = %d, ft_printf = %d\n", std_ret, ft_ret);

	// Test %u with maximum unsigned int
	printf("\nTesting %%u with maximum unsigned int:\n");
	std_ret = printf("printf:    [%u]\n", uint_max);
	ft_ret = ft_printf("ft_printf: [%u]\n", uint_max);
	printf("Return values: printf = %d, ft_printf = %d\n", std_ret, ft_ret);

	// Test %x with zero
	printf("\nTesting %%x with zero:\n");
	std_ret = printf("printf:    [%x]\n", zero);
	ft_ret = ft_printf("ft_printf: [%x]\n", zero);
	printf("Return values: printf = %d, ft_printf = %d\n", std_ret, ft_ret);

	// Test %X with zero
	printf("\nTesting %%X with zero:\n");
	std_ret = printf("printf:    [%X]\n", zero);
	ft_ret = ft_printf("ft_printf: [%X]\n", zero);
	printf("Return values: printf = %d, ft_printf = %d\n", std_ret, ft_ret);

	// Test %% with multiple %
	printf("\nTesting %%%% with multiple %%:\n");
	std_ret = printf("printf:    [%%%%%%%%]\n");
	ft_ret = ft_printf("ft_printf: [%%%%%%%%]\n");
	printf("Return values: printf = %d, ft_printf = %d\n", std_ret, ft_ret);

    return 0;
}
