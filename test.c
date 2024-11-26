/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:07:14 by caburges          #+#    #+#             */
/*   Updated: 2024/11/23 21:24:14 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	rv;
	int	expectedrv;
	char c = 'z';
	char string[] = "Heya";
	char	*null_str = NULL;
	char	*null_ptr = NULL;
	char longstring[] = "\n\tGod save our gracious King! \n\tLong live our noble King! \n\tGod save the King! \n\tSend him victorious, \n\tHappy and glorious, \n\tLong to reign over us, \n\tGod save the King. \n\tThy choicest gifts in store, \n\tOn him be pleased to pour, \n\tLong may he reign. \n\tMay he defend our laws, \n\tAnd ever give us cause, \n\tTo sing with heart and voice, \n\tGod save the King.";
	// Test1 : Simple Stringgg
	printf("TEST 1: String no arguments\n");
	rv = ft_printf("Me: Hello\n");
	expectedrv = printf("Pf: Hello\n");
	printf("RV: %i\n", rv);
	printf("Expected: %i\n", expectedrv);
	if (expectedrv == rv)
		printf("✅✅--- SUCCESS ---✅✅\n\n");
	else
		printf("❌❌--- FAILURE ---❌❌\n\n");


	printf("TEST 2: Int and char as arguments\n");
	rv = ft_printf("Me: %i %c\n", 354, c);
	expectedrv = printf("Pf: %i %c\n", 354, c);
	printf("RV: %i\n", rv);
	printf("Expected: %i\n", expectedrv);
	if (expectedrv == rv)
		printf("✅✅--- SUCCESS ---✅✅\n\n");
	else
		printf("❌❌--- FAILURE ---❌❌\n\n");

	printf("TEST 3: String as argument\n");
	rv = ft_printf("Me: %s\n", string);
	expectedrv = printf("Pf: %s\n", string);
	printf("RV: %i\n", rv);
	printf("Expected: %i\n", expectedrv);
	if (expectedrv == rv)
		printf("✅✅--- SUCCESS ---✅✅\n\n");
	else
		printf("❌❌--- FAILURE ---❌❌\n\n");

	printf("TEST 4: String, %% and char as arguments\n");
	rv = ft_printf("Me: %s %% %c\n", string, c);
	expectedrv = printf("Pf: %s %% %c\n", string, c);
	printf("RV: %i\n", rv);
	printf("Expected: %i\n", expectedrv);
	if (expectedrv == rv)
		printf("✅✅--- SUCCESS ---✅✅\n\n");
	else
		printf("❌❌--- FAILURE ---❌❌\n\n");

	printf("TEST 5: Unsigned max as argument\n");
	rv = ft_printf("Me: %u\n", UINT_MAX);
	expectedrv = printf("Pf: %u\n", UINT_MAX);
	printf("RV: %i\n", rv);
	printf("Expected: %i\n", expectedrv);
	if (expectedrv == rv)
		printf("✅✅--- SUCCESS ---✅✅\n\n");
	else
		printf("❌❌--- FAILURE ---❌❌\n\n");

	printf("TEST 6: unsigned, test 0\n");
	rv = ft_printf("Me: %u\n", 0);
	expectedrv = printf("Pf: %u\n", 0);
	printf("RV: %i\n", rv);
	printf("Expected: %i\n", expectedrv);
	if (expectedrv == rv)
		printf("✅✅--- SUCCESS ---✅✅\n\n");
	else
		printf("❌❌--- FAILURE ---❌❌\n\n");

	printf("TEST 7: %%i, test 0\n");
	rv = ft_printf("Me: %i\n", 0);
	expectedrv = printf("Pf: %i\n", 0);
	printf("RV: %i\n", rv);
	printf("Expected: %i\n", expectedrv);
	if (expectedrv == rv)
		printf("✅✅--- SUCCESS ---✅✅\n\n");
	else
		printf("❌❌--- FAILURE ---❌❌\n\n");

	printf("TEST 8: Unsigned, test negative input (-42)\n");
	rv = ft_printf("Me: %u\n", -42);
	expectedrv = printf("Pf: %u\n", -42);
	printf("RV: %i\n", rv);
	printf("Expected: %i\n", expectedrv);
	if (expectedrv == rv)
		printf("✅✅--- SUCCESS ---✅✅\n\n");
	else
		printf("❌❌--- FAILURE ---❌❌\n\n");


	printf("TEST 10: lower hex -> positive\n");
	rv = ft_printf("Me: %x\n", 468);
	expectedrv = printf("Pf: %x\n", 468);
	printf("RV: %i\n", rv);
	printf("Expected: %i\n", expectedrv);
	if (expectedrv == rv)
		printf("✅✅--- SUCCESS ---✅✅\n\n");
	else
		printf("❌❌--- FAILURE ---❌❌\n\n");

	printf("TEST 11: lower hex -> negative\n");
	rv = ft_printf("Me: %x\n", -468);
	expectedrv = printf("Pf: %x\n", -468);
	printf("RV: %i\n", rv);
	printf("Expected: %i\n", expectedrv);
	if (expectedrv == rv)
		printf("✅✅--- SUCCESS ---✅✅\n\n");
	else
		printf("❌❌--- FAILURE ---❌❌\n\n");

	printf("TEST 12: %% p non null\n");
	rv = ft_printf("Me: %p\n", string);
	expectedrv = printf("Pf: %p\n", string);
	printf("RV: %i\n", rv);
	printf("Expected: %i\n", expectedrv);
	if (expectedrv == rv)
		printf("✅✅--- SUCCESS ---✅✅\n\n");
	else
		printf("❌❌--- FAILURE ---❌❌\n\n");

	printf("TEST 13: %% null pointer\n"); // prints (nil)
	rv = ft_printf("Me: %p\n", null_ptr);
	expectedrv = printf("Pf: %p\n", null_ptr);
	printf("RV: %i\n", rv);
	printf("Expected: %i\n", expectedrv);
	if (expectedrv == rv)
		printf("✅✅--- SUCCESS ---✅✅\n\n");
	else
		printf("❌❌--- FAILURE ---❌❌\n\n");

	printf("TEST 14: lower hex -> 0\n");
	rv = ft_printf("Me: %x\n", 0);
	expectedrv = printf("Pf: %x\n", 0);
	printf("RV: %i\n", rv);
	printf("Expected: %i\n", expectedrv);
	if (expectedrv == rv)
		printf("✅✅--- SUCCESS ---✅✅\n\n");
	else
		printf("❌❌--- FAILURE ---❌❌\n\n");

	printf("TEST 15: upper hex -> positive \n");
	rv = ft_printf("Me: %X\n", 468);
	expectedrv = printf("Pf: %X\n", 468);
	printf("RV: %i\n", rv);
	printf("Expected: %i\n", expectedrv);
	if (expectedrv == rv)
		printf("✅✅--- SUCCESS ---✅✅\n\n");
	else
		printf("❌❌--- FAILURE ---❌❌\n\n");

	printf("TEST 15: upper hex -> positive \n");
	rv = ft_printf("Me: %X\n", 468);
	expectedrv = printf("Pf: %X\n", 468);
	printf("RV: %i\n", rv);
	printf("Expected: %i\n", expectedrv);
	if (expectedrv == rv)
		printf("✅✅--- SUCCESS ---✅✅\n\n");
	else
		printf("❌❌--- FAILURE ---❌❌\n\n");

	printf("TEST 15: upper hex -> negative \n");
	rv = ft_printf("Me: %X\n", -468);
	expectedrv = printf("Pf: %X\n", -468);
	printf("RV: %i\n", rv);
	printf("Expected: %i\n", expectedrv);
	if (expectedrv == rv)
		printf("✅✅--- SUCCESS ---✅✅\n\n");
	else
		printf("❌❌--- FAILURE ---❌❌\n\n");

	printf("TEST 16: upper hex -> 0 \n");
	rv = ft_printf("Me: %X\n", 0);
	expectedrv = printf("Pf: %X\n", 0);
	printf("RV: %i\n", rv);
	printf("Expected: %i\n", expectedrv);
	if (expectedrv == rv)
		printf("✅✅--- SUCCESS ---✅✅\n\n");
	else
		printf("❌❌--- FAILURE ---❌❌\n\n");

	printf("TEST 17: %% last char\n");
	rv = ft_printf("Me: %%");
	printf("\n");
	expectedrv = printf("Pf: %%");
	printf("\n");
	printf("RV: %i\n", rv);
	printf("Expected: %i\n", expectedrv);
	if (expectedrv == rv)
		printf("✅✅--- SUCCESS ---✅✅\n\n");
	else
		printf("❌❌--- FAILURE ---❌❌\n\n");


	printf("TEST 22: Mix of diferent things \n");
	rv = ft_printf("Me: \n This is a null string: %s,\n this is an int: %i,\n this is an unsigned: %u,\n this is a digit: %d,\n this is a string: %s,\n this is a percent sign: %%,\n this is a pointer: %p,\n this is a null pointer: %p,\n this is a lower hex: %x,\n this is an upper hex: %X,\n this is a character: %c\n\n", null_str, INT_MIN, UINT_MAX, INT_MAX, longstring, &longstring, null_ptr, INT_MIN, INT_MAX, c);
	expectedrv = printf("Pf: \n This is a null string: %s,\n this is an int: %i,\n this is an unsigned: %u,\n this is a digit: %d,\n this is a string: %s,\n this is a percent sign: %%,\n this is a pointer: %p,\n this is a null pointer: %p,\n this is a lower hex: %x,\n this is an upper hex: %X,\n this is a character: %c\n\n", null_str, INT_MIN, UINT_MAX, INT_MAX, longstring, &longstring, null_ptr, INT_MIN, INT_MAX, c);
	printf("RV: %i\n", rv);
	printf("Expected: %i\n", expectedrv);
	if (expectedrv == rv)
		printf("✅✅--- SUCCESS ---✅✅\n\n");
	else
		printf("❌❌--- FAILURE ---❌❌\n\n");
}
