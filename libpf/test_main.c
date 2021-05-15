/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 12:13:51 by nneronin          #+#    #+#             */
/*   Updated: 2021/05/15 19:47:13 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
//#include "./libpf/ft_printf.h"
#include "../libft/libft.h"
#include "./libpf.h"

// gcc test_main.c libft/libft.a ft_printf/ft_printf.
void	float_main(void)
{
	int print_len;
	double nb = 12345.123456789123456789123456789;
	printf("|%-10.0lf|\n", nb);
	print_len = ft_printf("|%-10.0lf|\n", nb);
	printf("print_len = %d\n\n", print_len);
	printf("|%-1.10lf|\n", nb);
	print_len = ft_printf("|%-1.10lf|\n", nb);
	printf("print_len = %d\n\n", print_len);
	printf("|%3.2lf|\n", nb);
	print_len = ft_printf("|%3.2lf|\n", nb);
	printf("print_len = %d\n\n", print_len);
	printf("|%-05lf|\n", nb);
	print_len = ft_printf("|%-05lf|\n", nb);
	printf("print_len = %d\n\n", print_len);
	printf("|%09lf|\n", nb);
	print_len = ft_printf("|%09lf|\n", nb);
	printf("print_len = %d\n\n", print_len);
	printf("|%03lf|\n", nb);
	print_len = ft_printf("|%03lf|\n", nb);
	printf("print_len = %d\n\n", print_len);
	printf("|%-5.0lf|\n", nb);
	print_len = ft_printf("|%-5.0lf|\n", nb);
	printf("print_len = %d\n\n", print_len);
	printf("|%#-5.0lf|\n", nb);
	print_len = ft_printf("|%#-5.0lf|\n", nb);
	printf("print_len = %d\n\n", print_len);
	printf("|%#-10.0lf|\n", nb);
	print_len = ft_printf("|%#-10.0lf|\n", nb);
	printf("print_len = %d\n\n", print_len);
	printf("|%#10.0lf|\n", nb);
	print_len = ft_printf("|%#10.0lf|\n", nb);
	printf("print_len = %d\n\n", print_len);
	printf("|%#10.lf|\n", nb);
	print_len = ft_printf("|%#10.lf|\n", nb);
	printf("print_len = %d\n\n", print_len);
	printf("|%+#10.lf|\n", nb);
	print_len = ft_printf("|%+#10.lf|\n", nb);
	printf("print_len = %d\n\n", print_len);
	printf("|%+-#10.lf|\n", nb);
	print_len = ft_printf("|%+-#10.lf|\n", nb);
	printf("print_len = %d\n\n", print_len);
	printf("|%+-#10.9lf|\n", nb);
	print_len = ft_printf("|%+-#10.9lf|\n", nb);
	printf("print_len = %d\n\n", print_len);
	printf("|% -#10.9lf|\n", nb);
	print_len = ft_printf("|% -#10.9lf|\n", nb);
	printf("print_len = %d\n\n", print_len);
	printf("|% -#10.lf|\n", nb);
	print_len = ft_printf("|% -#10.lf|\n", nb);
	printf("print_len = %d\n\n", print_len);
	print_len = printf("|% -#10.17lf|\n", nb);
	print_len = ft_printf("|% -#10.17lf|\n", nb);
	printf("print_len = %d\n\n", print_len);
	/*double		nb;
	nb = -12547.58;
	print_len = ft_printf("|% f|\n", nb);
	printf("|% f|\n", nb);
	print_len = ft_printf("|%+f|\n", nb);
	printf("|%+f|\n", nb);
	print_len = ft_printf("|%#f|\n", nb);
	printf("|%#f|\n", nb);
	print_len = ft_printf("|%.2f|\n", nb);
	printf("|%.2f|\n", nb);
	print_len = ft_printf("|%.14f|\n", nb);
	printf("|%.14f|\n", nb);
	print_len = ft_printf("|%#.0f|\n", nb);
	printf("|%#.0f|\n", nb);
	print_len = ft_printf("|% .5f|\n", nb);
	printf("|% .5f|\n", nb);
	print_len = ft_printf("|%# .0f|\n", nb);
	printf("|%# .0f|\n", nb);
	print_len = ft_printf("|% #.0f|\n", nb);
	printf("|% #.0f|\n", nb);
	print_len = ft_printf("|%+.5f|\n", nb);
	printf("|%+.5f|\n", nb);
	print_len = ft_printf("|%+.0f|\n", nb);
	printf("|%+.0f|\n", nb);
	print_len = ft_printf("|%#+.0f|\n", nb);
	printf("|%#+.0f|\n", nb);
	print_len = ft_printf("|%0.5f|\n", nb);
	printf("|%0.5f|\n", nb);
	print_len = ft_printf("|%-.5f|\n", nb);
	printf("|%-.5f|\n", nb);
	print_len = ft_printf("|%5f|\n", nb);
	printf("|%5f|\n", nb);
	print_len = ft_printf("|% 5f|\n", nb);
	printf("|% 5f|\n", nb);
	print_len = ft_printf("|%+5f|\n", nb);
	printf("|%+5f|\n", nb);
	print_len = ft_printf("|%# 5f|\n", nb);
	printf("|%# 5f|\n", nb);
	print_len = ft_printf("|%#+5f|\n", nb);
	printf("|%#+5f|\n", nb);
	print_len = ft_printf("|%-5f|\n", nb);
	printf("|%-5f|\n", nb);
	print_len = ft_printf("|%05f|\n", nb);
	printf("|%05f|\n", nb);
	print_len = ft_printf("|%+05f|\n", nb);
	printf("|%+05f|\n", nb);
	print_len = ft_printf("|%0+5f|\n", nb);
	printf("|%0+5f|\n", nb);
	print_len = ft_printf("|%05.3f|\n", nb);
	printf("|%05.3f|\n", nb);
	print_len = ft_printf("|%0#5.0f|\n", nb);
	printf("|%0#5.0f|\n", nb);
	print_len = ft_printf("|%-5.3f|\n", nb);
	printf("|%-5.3f|\n", nb);
	print_len = ft_printf("|%-#5.0f|\n", nb);
	printf("|%-#5.0f|\n", nb);
	print_len = ft_printf("|%+05.3f|\n", nb);
	printf("|%+05.3f|\n", nb);
	print_len = ft_printf("|%0+#5.0f|\n", nb);
	printf("|%0+#5.0f|\n", nb);
	print_len = ft_printf("|%0 5.3f|\n", nb);
	printf("|%0 5.3f|\n", nb);
	print_len = ft_printf("|% 05.3f|\n", nb);
	printf("|% 05.3f|\n", nb);
	print_len = ft_printf("|%#0 5.0f|\n", nb);
	printf("|%#0 5.0f|\n", nb);
	print_len = ft_printf("|%-+5.3f|\n", nb);
	printf("|%-+5.3f|\n", nb);
	print_len = ft_printf("|%#+5.0f|\n", nb);
	printf("|%#+5.0f|\n", nb);*/

	/*print_len = ft_printf("{% 5.f}\n", 137.0);
	  printf("{% 5.f}\n\n", 137.0);
	  print_len = ft_printf("{%05.f}\n", 137.0);
	  printf("{%05.f}\n\n", 137.0);
	  print_len = ft_printf("{%-05.f}\n", 137.0);
	  printf("{%-05.f}\n\n", 137.0);
	  print_len = ft_printf("{%+5.f}\n", 137.0);
	  printf("{%+5.f}\n\n", 137.0);
	  print_len = ft_printf("{%+#5.f}\n", 137.0);
	  printf("{%+#5.f}\n\n", 137.0);
	  print_len = ft_printf("{%-5.f}\n", 137.0);
	  printf("{%-5.f}\n\n", 137.0);
	  print_len = ft_printf("{%#5.f}\n", 137.0);
	  printf("{%#5.f}\n\n", 137.0);
	  print_len = ft_printf("{%5.f}\n", 137.0);
	  printf("{%5.f}\n\n", 137.0);
	  print_len = ft_printf("{%5.f}\n", 0.0);
	  printf("{%5.f}\n\n", 0.0);
	  print_len = ft_printf("{%#5f}\n", 1.0);
	  printf("{%#5f}\n\n", 1.0);
	  print_len = ft_printf("{%#5f}\n", 0.0);
	  printf("{%#5f}\n\n", 0.0);
	  print_len = ft_printf("{%5f}\n", 0.0);
	  printf("{%5f}\n\n", 0.0);*/
	/*print_len = ft_printf("{%#.f, %#.0f}\n", 0.0, 0.0);
	  printf("{%#.f, %#.0f}\n\n", 0.0, 0.0);
	  print_len = ft_printf("{%.f, %.0f}\n", 0.0, 0.0);
	  printf("{%.f, %.0f}\n\n", 0.0, 0.0);
	  print_len = ft_printf("{%#.f, %#.0f}\n", 1.0, 1.0);
	  printf("{%#.f, %#.0f}\n\n", 1.0, 1.0);
	  print_len = ft_printf("{%.f, %.0f}\n", 1.0, 1.0);
	  printf("{%.f, %.0f}\n\n", 1.0, 1.0);
	  print_len = ft_printf("{%#05f, %#05f}\n", 1.0, 1.0);
	  printf("{%#05f, %#05f}\n\n", 1.0, 1.0);
	  print_len = ft_printf("|%#07.5f|\n", 175.0);
	  printf("|%#07.5f|\n\n", 175.0);
	  print_len = ft_printf("|%7.5f|\n", 175.0);
	  printf("|%7.5f|\n\n", 175.0);
	  print_len = ft_printf("{%#.5f}\n", 1.0);
	  printf("{%#.5f}\n\n", 1.0);
	  print_len = ft_printf("{%.5f}\n", 1.0);
	  printf("{%.5f}\n\n", 1.0);
	  print_len = ft_printf("{%#.5f}\n", 0.0);
	  printf("{%#.5f}\n\n", 0.0);
	  print_len = ft_printf("{%.f}\n", 0.0);
	  printf("{%.f}\n\n", 0.0);
	  print_len = ft_printf("{%5f}\n", 1.5);
	  printf("{%5f}\n\n", 1.5);
	  print_len = ft_printf("{%.5f}\n", 1.5);
	  printf("{%.5f}\n\n", 1.5);
	  print_len = ft_printf("{%5f}\n", 1500.5);
	  printf("{%5f}\n\n", 1500.5);
	  print_len = ft_printf("{%.5f}\n", 1500.5);
	  printf("{%.5f}\n\n", 1500.5);
	  print_len = ft_printf("{%5.5f}\n", 0.0);
	  printf("{%5.5f}\n\n", 0.0);*/

	/*print_len = ft_printf("2147483648.123450012: %.0f\n", 2147483648.123450012);
	  printf("2147483648.123450012: %.0f\n\n", 2147483648.123450012);
	  print_len = ft_printf("0.01: %.15f\n", 0.01);
	  printf("0.01: %.15f\n\n", 0.01);
	  print_len = ft_printf("0.0: %f\n", 0.0);
	  printf("0.0: %f\n\n", 0.0);
	//	print_len = ft_printf("1: %f\n", 1);
	//	printf("1: %f\n\n", 1);
	print_len = ft_printf("1.0: %f\n", 1.0);
	printf("1.0: %f\n\n", 1.0);
	print_len = ft_printf("01.01: %.4f\n", 01.01);
	printf("01.01: %.4f\n\n", 01.01);
	//	print_len = ft_printf("9999999999999999999: %f\n", 9999999999999999999);
	//	printf("9999999999999999999: %f\n\n", 9999999999999999999);
	print_len = ft_printf("0.00000000000000000001: %f\n", 0.00000000000000000001);
	printf("0.00000000000000000001: %f\n\n", 0.00000000000000000001);
	print_len = ft_printf("0.1234567: %f\n", 0.1234567);
	printf("0.1234567: %f\n\n", 0.1234567);
	print_len = ft_printf("0.1234564: %f\n", 0.1234564);
	printf("0.1234564: %f\n\n", 0.1234564);
	//	print_len = ft_printf("10: %f\n", 10);
	//	printf("10: %f\n\n", 10);
	//	print_len = ft_printf("-0: %f\n", -0);
	//	printf("-0: %f\n\n", -0);
	print_len = ft_printf("-1.5: %.2f\n", -1.5);
	printf("-1.5: %.2f\n\n", -1.5);
	print_len = ft_printf("-0.05: %f\n", -0.05);
	printf("-0.05: %f\n\n", -0.05);
	//	print_len = ft_printf("45: %f\n", -45);
	//	printf("45: %f\n\n", -45);*/
}

int		not_my(void)
{
	int print_len;
	print_len = ft_printf("invalid%\n");
	printf("print_len = %d\n", print_len);
	print_len = printf("invalid%\n");
	printf("print_len = %d\n\n", print_len);
	
	ft_printf("|%s|\n", "abc");
	printf("|%s|\n\n", "abc");
	ft_printf("|%4.s|\n", "42");
	printf("|%4.s|\n\n", "42");
	ft_printf("|%4.1s|\n", "42");
	printf("|%4.1s|\n\n", "42");
	ft_printf("|%4s|\n", "42");
	printf("|%4s|\n\n", "42");
	ft_printf("|%.01s|\n", "");
	printf("|%.01s|\n\n", "");
	ft_printf("|%.02s|\n", "");
	printf("|%.02s|\n\n", "");
	ft_printf("|%2s|\n", "");
	printf("|%2s|\n\n", "");

	ft_printf("|%01.u|\n", 0);
	printf("|%01.u|\n\n", 0);
	ft_printf("|%01.d|\n", 0);
	printf("|%01.d|\n\n", 0);


	ft_printf("|%d||%d||%d|\n");
	printf("|%d||%d||%d|\n");

	ft_printf(NULL);
	ft_printf(NULL, 123, 'A', 1235.123);

	ft_printf("|%f|\n", -12547.58);
	printf("|%f|\n\n", -12547.58);

	ft_printf(">------------<%1.14s>------------<\n", "");
	printf(">------------<%1.14s>------------<\n\n", "");
	
	ft_printf("test %-10.2ls!!\n", L"〻");
	printf("test %-10.2ls!!\n", L"〻");
	ft_printf("|u{%4.2s}s {%-1.s} {%---5.3s}|\n", "coco", NULL, "yooo");
	printf("|u{%4.2s}s {%-1.s} {%---5.3s}|\n\n", "coco", NULL, "yooo");
	ft_printf("|%-1.1s|\n", NULL);
	printf("|%-1.1s|\n\n", NULL);
	ft_printf("|%-1.s|\n", NULL);
	printf("|%-1.s|\n\n", NULL);
	ft_printf("|%-2.s|\n", NULL);
	printf("|%-2.s|\n\n", NULL);
	ft_printf("|%10s|\n", NULL);
	printf("|%10s|\n\n", NULL);
	ft_printf("|%010s|\n", NULL);
	printf("|%010s|\n\n", NULL);
	ft_printf("|%0.s|\n", "hi");
	printf("|%0.s|\n\n", "hi");
	ft_printf("|%---12s|\n", 0);
	printf("|%---12s|\n\n", 0);

	printf("--------- o -----------\n");

	ft_printf("{%#5o}\n", 1);
	printf("{%#5o}\n\n", 1);
	ft_printf("{%#5o}\n", 0);
	printf("{%#5o}\n\n", 0);
	ft_printf("{%5o}\n", 0);
	printf("{%5o}\n\n", 0);
	ft_printf("{%#.o, %#.0o}\n", 0, 0);
	printf("{%#.o, %#.0o}\n\n", 0, 0);
	ft_printf("{%.o, %.0o}\n", 0, 0);
	printf("{%.o, %.0o}\n\n", 0, 0);
	ft_printf("{%#.o, %#.0o}\n", 1, 1);
	printf("{%#.o, %#.0o}\n\n", 1, 1);
	ft_printf("{%.o, %.0o}\n", 1, 1);
	printf("{%.o, %.0o}\n\n", 1, 1);
	ft_printf("{%#05o, %#05o}\n", 1, 1);
	printf("{%#05o, %#05o}\n\n", 1, 1);
	ft_printf("|%#7.5o|\n", 0xab);
	printf("|%#7.5o|\n\n", 0xab);
	ft_printf("|%7.5o|\n", 0xab);
	printf("|%7.5o|\n\n", 0xab);
	ft_printf("|%#7.5o|\n", 0xab);
	printf("|%#7.5o|\n\n", 0xab);
	ft_printf("{%#.5o}\n", 1);
	printf("{%#.5o}\n\n", 1);
	ft_printf("{%.5o}\n", 1);
	printf("{%.5o}\n\n", 1);
	ft_printf("{%5.5o}\n", 1);
	printf("{%5.5o}\n\n", 1);
	ft_printf("{%#.5o}\n", 0);
	printf("{%#.5o}\n\n", 0);
	ft_printf("{%.o}\n", 0);
	printf("{%.o}\n\n", 0);
	ft_printf("{%5.o}\n", 0);
	printf("{%5.o}\n\n", 0);
	ft_printf("{%.5o}\n", 0);
	printf("{%.5o}\n\n", 0);
	ft_printf("{%5.5o}\n", 0);
	printf("{%5.5o}\n\n", 0);

	/*ft_printf("{%05.%}\n", 0);
	printf("{%05.%}\n\n", 0);
	ft_printf("{%5.%}\n", 0);
	printf("{%5.%}\n\n", 0);
	ft_printf("{%05.1%}\n", 0);
	printf("{%05.1%}\n\n", 0)	
	ft_printf("{%05.3%}\n", 0);
	printf("{%05.3%}\n\n", 0);*/

	ft_printf("@moulitest: |%.o %.0o|\n", 0, 0);
	printf("@moulitest: |%.o %.0o|\n\n", 0, 0);
	ft_printf("@moulitest: |%#.o %#.0o|\n", 0, 0);
	printf("@moulitest: |%#.o %#.0o|\n\n", 0, 0);
	ft_printf("@moulitest: |%o|\n", 0);
	printf("@moulitest: |%o|\n\n", 0);
	ft_printf("|%#o|\n", 0);
	printf("|%#o|\n\n", 0);
	ft_printf("|%#.o|\n", 0);
	printf("|%#.o|\n\n", 0);
	ft_printf("|%#6o|\n", 2500);
	printf("|%#6o|\n\n", 2500);
	ft_printf("|%-#6o|\n", 2500);
	printf("|%-#6o|\n\n", 2500);
	long a = 0;
	ft_printf("J'ai %i %s et %c yeux et 0.1%% de capacite cerebrale\n\n", 4, "dents", '2');
	printf("J'ai %i %s et %c yeux et 0.1%% de capacite cerebrale\n\n", 4, "dents", '2');
	ft_printf("ft_printf: uint:	%u\n", 55555);
	printf("printf: uint:		%u\n\n", 55555);
	ft_printf("ft_printf: hexa:	%x\n", 55555);
	printf("printf: hexa:		%x\n\n", 55555);
	ft_printf("ft_printf: hexa maj:	%X\n", 55555);
	printf("printf: hexa maj:	%X\n\n", 55555);
	ft_printf("ft_printf: octal:	%o\n", 55555);
	printf("printf: otcal:		%o\n\n", 55555);
	ft_printf("Long test:\naaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbbb\n\n");

	
	ft_printf("Precision:\n");
	ft_printf("|%+.2d|\n", 5); printf("|%+.2d|\n\n", 5);
	ft_printf("|%.5d|\n", -500); printf("|%.5d|\n\n", -500);
	ft_printf("|%.1d|\n", -500); printf("|%.1d|\n\n", -500);
	ft_printf("|%.2d|\n", 5); printf("|%.2d|\n\n", 5);
	ft_printf("|%.2d|\n", -5); printf("|%.2d|\n\n", -5);
	ft_printf("|%.5d|\n", -5); printf("|%.5d|\n\n", -5);
	ft_printf("|%10.5d|\n", 5); printf("|%10.5d|\n\n", 5);
	ft_printf("|%010.5d|\n", 5); printf("|%010.5d|\n\n", 5);
	ft_printf("|%010d|\n", 5); printf("|%010d|\n\n", 5);
	ft_printf("|%-010d|\n", 5); printf("|%-010d|\n\n", 5);
	ft_printf("|%010.1d|\n", 5); printf("|%010.1d|\n\n", 5);
	ft_printf("|%010.0d|\n", 5); printf("|%010.1d|\n\n", 5);
	ft_printf("|%10.5d|\n", -5); printf("|%10.5d|\n\n", -5);
	ft_printf("|%-10.5d|\n", -5); printf("|%-10.5d|\n\n", -5);
	ft_printf("|% 10.5d|\n", 5); printf("|% 10.5d|\n\n", 5);
	ft_printf("|%- 10.5d|\n", 5); printf("|%- 10.5d|\n\n", 5);
	ft_printf("|%-+ 10.5d|\n", 5); printf("|%-+ 10.5d|\n\n", 5);
	ft_printf("|%+- 10.5d|\n", -5); printf("|%+- 10.5d|\n\n", -5);

	/*ft_printf("Check global %%d:\n");
	ft_printf("|%       ---  15.5hhu|\n", 127);
	printf("|%       ---  15.5hhu|\n\n", 127);
	ft_printf("|%       ---  15.5hhu|\n", 128);
	printf("|%       ---  15.5hhu|\n\n", 128);
	ft_printf("|% 00    00    15.5hhu|\n", 127);
	printf("|% 00   00     15.5hhu|\n\n", 127);
	ft_printf("|% 00    00    15.0hhu|\n", 127);
	printf("|% 00   00     15.0hhu|\n\n", 127);
	ft_printf("|% 00    00    15.0hhu|\n", 127);
	printf("|% 00   00     15.0hhu|\n\n", 127);

	ft_printf("\nCheck global %%x:\n\n");
	ft_printf("|%       ---  15.5hhx|\n", 255);
	printf("|%       ---  15.5hhx|\n\n", 255);
	ft_printf("|%       ---  15.5hhx|\n", 256);
	printf("|%       ---  15.5hhx|\n\n", 256);
	ft_printf("|%       ---  15.5hhx|\n", 0);
	printf("|%       ---  15.5hhx|\n\n", 0);
	ft_printf("|% 00    00    15.5x|\n", 127);
	printf("|% 00   00     15.5x|\n\n", 127);
	ft_printf("|% 00    00    15.0x|\n", 127);
	printf("|% 00   00     15.0x|\n\n", 127);
	ft_printf("|% 00    00    15.0x|\n", 127);
	printf("|% 00   00     15.0x|\n\n", 127);
	ft_printf("|% 00   --- 00    15.0x|\n", 127);
	printf("|% 00   ---00     15.0x|\n\n", 127);
	ft_printf("|% 00   --- 00 ++   15.0x|\n", 127);
	printf("|% 00   ---00   +++  15.0x|\n\n", 127);
	ft_printf("|%++   15.0x|\n", 127);
	printf("|%++  15.0x|\n", 127);
	ft_printf("\nCheck global %%X:\n\n");
	ft_printf("|%       ---  15.5hhX|\n", 255);
	printf("|%       ---  15.5hhX|\n\n", 255);
	ft_printf("|%       ---  15.5hhX|\n", 256);
	printf("|%       ---  15.5hhX|\n\n", 256);
	ft_printf("|%       ---  15.5hhX|\n", 0);
	printf("|%       ---  15.5hhX|\n\n", 0);
	ft_printf("|% 00    00    15.5X|\n", 127);
	printf("|% 00   00     15.5X|\n\n", 127);
	ft_printf("|% 00    00    15.0X|\n", 127);
	printf("|% 00   00     15.0X|\n\n", 127);
	ft_printf("|% 00    00    15.0X|\n", 127);
	printf("|% 00   00     15.0X|\n\n", 127);
	ft_printf("|% 00   --- 00    15.0X|\n", 127);
	printf("|% 00   ---00     15.0X|\n\n", 127);
	ft_printf("|% 00   --- 00 ++   15.0X|\n", 127);
	printf("|% 00   ---00   +++  15.0X|\n\n", 127);
	ft_printf("|%++   15.0X|\n", 127);
	printf("|%++  15.0X|\n", 127);
	ft_printf("\nCheck global %%o:\n\n");
	ft_printf("|%       ---  15.5hho|\n", 255);
	printf("|%       ---  15.5hho|\n\n", 255);
	ft_printf("|%       ---  15.5hho|\n", 256);
	printf("|%       ---  15.5hho|\n\n", 256);
	ft_printf("|%       ---  15.5hho|\n", 0);
	printf("|%       ---  15.5hho|\n\n", 0);
	ft_printf("|% 00    00    15.5o|\n", 127);
	printf("|% 00   00     15.5o|\n\n", 127);
	ft_printf("|% 00    00    15.0o|\n", 127);
	printf("|% 00   00     15.0o|\n\n", 127);
	ft_printf("|% 00    00    15.0o|\n", 127);
	printf("|% 00   00     15.0o|\n\n", 127);
	ft_printf("|% 00   --- 00    15.0o|\n", 127);
	printf("|% 00   ---00     15.0o|\n\n", 127);
	ft_printf("|% 00   --- 00 ++   15.0o|\n", 127);
	printf("|% 00   ---00   +++  15.0o|\n\n", 127);
	ft_printf("|%++   15.0o|\n", 127);
	printf("|%++  15.0o|\n", 127);*/

/*	ft_printf("\nl_min:\n");
	ft_printf("|%d|", 5); printf("\n|%d|\n", 5);
	ft_printf("|%10hhd|", 127); printf("\n|%10hhd|\n", 127);
	ft_printf("|%10hhd|", 128); printf("\n|%10hhd|\n", 128);
	ft_printf("|%10hhd|", -5); printf("\n|%10hhd|\n", -5);
	ft_printf("|%3d|", 4000); printf("\n|%3d|\n", 4000);
	ft_printf("|%3d|", -4000); printf("\n|%3d|\n", -4000);
	ft_printf("|%3d|", -400); printf("\n|%3d|\n", -400);
	ft_printf("\n\'0\':\n");
	ft_printf("|%0d|", 5); printf("\n|%0d|\n", 5);
	ft_printf("|%010hhd|", 127); printf("\n|%010hhd|\n", 127);
	ft_printf("|%010hhd|", 128); printf("\n|%010hhd|\n", 128);
	ft_printf("|%010hhd|", -5); printf("\n|%010hhd|\n", -5);
	ft_printf("\n\'-\':\n");
	ft_printf("|%-0d|", 5); printf("\n|%-0d|\n", 5);
	ft_printf("|%-010hhd|", 127); printf("\n|%-010hhd|\n", 127);
	ft_printf("|%-010hhd|", 128); printf("\n|%-010hhd|\n", 128);
	ft_printf("|%-010hhd|", -5); printf("\n|%-010hhd|\n", -5);
	ft_printf("\n\'+\':\n");
	ft_printf("|%+0d|", 5); printf("\n|%+0d|\n", 5);
	ft_printf("|%+010hhd|", 127); printf("\n|%+010hhd|\n", 127);
	ft_printf("|%+010hhd|", 128); printf("\n|%+010hhd|\n", 128);
	ft_printf("|%+010hhd|", -5); printf("\n|%+010hhd|\n", -5);
	ft_printf("|%+d|", 5); printf("\n|%+d|\n", 5);
	ft_printf("|%+10hhd|", 127); printf("\n|%+10hhd|\n", 127);
	ft_printf("|%+10hhd|", 128); printf("\n|%+10hhd|\n", 128);
	ft_printf("|%+10hhd|", -5); printf("\n|%+10hhd|\n", -5);*/

	/*ft_printf("\nOptions:\n");
	ft_printf("|%+++d|", 5); printf("\n|%+++0d|\n\n", 5);
	ft_printf("|%+++10hhd|", 127); printf("\n|%+++10hhd|\n\n", 127);
	ft_printf("|%+++10hhd|", 128); printf("\n|%+++10hhd|\n\n", 128);
	ft_printf("|%+++10hhd|", -5); printf("\n|%+++10hhd|\n\n", -5);
	ft_printf("|%----+++0d|", 5); printf("\n|%----+++0d|\n\n", 5);
	ft_printf("|%----+++10hhd|", 127); printf("\n|%----+++10hhd|\n\n", 127);
	ft_printf("|%----+++10hhd|", 128); printf("\n|%----+++10hhd|\n\n", 128);
	ft_printf("|%----+++10hhd|", -5); printf("\n|%----+++10hhd|\n\n", -5);
	ft_printf("|%  0 010d|", 5); printf("\n|%  0 010d|\n\n", 5);
	ft_printf("|%  0 010d|", 127); printf("\n|%  0 010d|\n\n", 127);
	ft_printf("|%  0 010d|", 128); printf("\n|%  0 010d|\n\n", 128);
	ft_printf("|%  0 010d|", -5); printf("\n|%  0 010d|\n\n", -5);
	ft_printf("|%   10d|", -5); printf("\n|%   10d|\n\n", -5);
	ft_printf("|% ----  10d|", -5); printf("\n|% ----  10d|\n\n", -5);
	ft_printf("|% ----  010d|", -5); printf("\n|% ----  010d|\n\n", -5);
	ft_printf("|% -+-+-+-  010d|", -5); printf("\n|% -+-+-+-  010d|\n\n", -5);
	ft_printf("|% -+-+-+-  010d|", 5); printf("\n|% -+-+-+-  010d|\n\n", 5);
	ft_printf("|% ----  10d|", 5); printf("\n|% ----  10d|\n\n", 5);*/

	/*ft_printf("\n%%hhd:\n");
	ft_printf("|%hhd|", 127); printf("	|%hhd|\n", 127);
	ft_printf("|%hhd|", 128); printf("	|%hhd|\n", 128);
	ft_printf("|%hhd|", -128); printf("	|%hhd|\n", -128);
	ft_printf("|%hhd|", -129); printf("	|%hhd|\n", -129);
	
	ft_printf("\n%%hd:\n");
	ft_printf("|%hd|", 32767); printf("		|%hd|\n", 32767);
	ft_printf("|%hd|", 32768); printf("	|%hd|\n", 32768);
	ft_printf("|%hd|", -32768); printf("	|%hd|\n", -32768);
	ft_printf("|%hd|", -32769); printf("		|%hd|\n", -32769);
	
	ft_printf("\n%%d:\n");
	ft_printf("|%d|", 2147483647); printf("	|%d|\n", 2147483647);
	ft_printf("|%d|", 2147483648); printf("	|%d|\n", 2147483648);
	ft_printf("|%d|", -2147483648); printf("	|%d|\n", -2147483648);
	ft_printf("|%d|", -2147483649); printf("	|%d|\n", -2147483649);
	
	ft_printf("\n%%l:\n");
	ft_printf("|%ld|", 9223372036854775807); printf("	|%ld|\n", 9223372036854775807);
	ft_printf("|%ld|", 9223372036854775808); printf("	|%ld|\n", 9223372036854775808);
	ft_printf("|%ld|", -9223372036854775808); printf("	|%ld|\n", -9223372036854775808);
	ft_printf("|%ld|", -9223372036854775809); printf("	|%ld|\n", -9223372036854775809);
	
	ft_printf("\n%%ll:\n");
	ft_printf("|%lld|", 9223372036854775807); printf("	|%lld|\n", 9223372036854775807);
	ft_printf("|%lld|", 9223372036854775808); printf("	|%lld|\n", 9223372036854775808);
	ft_printf("|%lld|", -9223372036854775808); printf("	|%lld|\n", -9223372036854775808);
	ft_printf("|%lld|", -9223372036854775809); printf("	|%lld|\n", -9223372036854775809);*/
	//sizes();
	
	/*ft_printf("%%c:\n");
	printf("|%010c|\n", 110);
	ft_printf("|%010c|\n\n", 110);
	printf("|%010c|\n", 110);
	ft_printf("|%010c|\n\n", 110);
	printf("|%-10c|\n", 'n');
	ft_printf("|%-10c|\n\n", 'n');
	printf("|%+10c|\n", 'n');
	ft_printf("|%+10c|\n\n", 'n');
	printf("|%- 10c|\n", 'n');
	ft_printf("|%- 10c|\n\n", 'n');
	printf("|%10.5c|\n", 110);
	ft_printf("|%10.5c|\n\n", 110);
	printf("|%10.5c|\n", 'n');
	ft_printf("|%10.5c|\n\n", 'n');
	ft_printf("|%   ++++    ---  15.5c|\n", 'a');
	printf("|%   ++++    ---  15.5c|\n", 'a');
	ft_printf("|%   ++++      15.5c|\n", 'a');
	printf("|%   ++++      15.5c|\n", 'a');
	ft_printf("|% 00  ++++  00  ---  15.5c|\n", 'a');
	printf("|% 00  ++++ 00   ---  15.5c|\n", 'a');
	ft_printf("|% 00  ++++  00  ---  15.5d|\n", 'a');
	printf("|% 00  ++++ 00   ---  15.5d|\n", 'a');*/
	
	/*ft_printf("%%s:\n");
	printf("|%010s|\n", "bonjour");
	ft_printf("|%010s|\n\n", "bonjour");
	printf("|%010s|\n", "ab");
	ft_printf("|%010s|\n\n", "ab");
	printf("|%-10s|\n", "nb");
	ft_printf("|%-10s|\n\n", "nb");
	printf("|%+10s|\n", "nb");
	ft_printf("|%+10s|\n\n", "nb");
	printf("|%- 10s|\n", "nb");
	ft_printf("|%- 10s|\n\n", "nb");
	printf("|%10.5s|\n", "012345dbwvvvfdfsf01234");
	ft_printf("|%10.5s|\n\n", "012345fsdfdfsfds01234");
	printf("|%010.5s|\n", "nb");
	ft_printf("|%010.5s|\n\n", "nb");
	ft_printf("|%   ++++    ---  15.5s|\n", "ab");
	printf("|%   ++++    ---  15.5s|\n", "ab");
	ft_printf("|%   ++++      15.5s|\n", "des mots");
	printf("|%   ++++      15.5s|\n", "des mots");
	ft_printf("|% 00  ++++  00  ---  15.5s|\n", "demo");
	printf("|% 00  ++++ 00   ---  15.5s|\n", "demo");
	ft_printf("|% 00  ++++  00  ---  15.5d|\n", "a");
	printf("|% 00  ++++ 00   ---  15.5d|\n", "a");*/
	return (0);
}

int main(void)
{
	//not_my();
	float_main();
	//return (1);
	char *asd = "Hello World!";
	int x = 12359;
	char a = 'a';
	unsigned int t = 96;
	unsigned short int tt = 948;
	long double dd = 11112312.123123123;
	unsigned char xx = 22;
	unsigned long int  uli = 234;
	unsigned long long int ulli = 1242;

	signed char hh = a;
	short int h = -1234;
	long int l = 1234;
	long long int ll = -9223372036854775807;
	long long int lll = -9223372036854775807;

	ft_timer_start();
	printf("---------Start--------\n");
	ft_printf("User s: %s %s\n", asd, asd);  //.19 ??
	printf("Real s: %s\n", asd);

	printf("----------------------\n");
	ft_printf("User c: %c\n", a);
	printf("Real c: %c\n", a);

	printf("----------------------\n");
	ft_printf("User d: %.d\n", x);	
	printf("Real d: %.d\n", x);

	printf("----------------------\n");
	ft_printf("User i: %i %i %i\n", 12, 012, 0x12);
	printf("Real i: %i %i %i\n", 12, 012, 0x12);

	printf("----------------------\n");
	ft_printf("User u: %u\n", t);
	printf("Real u: %u\n", t);

	printf("----------------------\n"); //'-' error in ouxX, dif only '-'
	ft_printf("User o: %20.10o\n", x);
	printf("Real o: %20.10o\n", x);

	printf("----------------------\n");
	ft_printf("User x: %x\n", x);
	printf("Real x: %x\n", x);
	
	printf("----------------------\n");
	ft_printf("User X: %20.10X\n", x);
	printf("Real X: %20.10X\n", x);

	printf("----------------------\n");
	ft_printf("User %% procent: %d\n", x); 
	printf("Real %% procent: %d\n", x);

	printf("----------------------\n");
	ft_printf("(%)"); 
	printf("(%)");
	printf("----------------------\n");
	ft_printf("User d: %+7.5d\n", -123);
	ft_printf("User d: %+7.3d\n", 12345);
	ft_printf("User d: %+5.3d\n", 1234567);
	ft_printf("User d: %+5.7d\n", 123);
	ft_printf("User d: %+3.7d\n", 12345);
	ft_printf("User d: %+3.5d\n", 1234567);

	
	printf("Real d: %+7.5d\n", -123);
	printf("Real d: %+7.3d\n", 12345);
	printf("Real d: %+5.3d\n", 1234567);
	printf("Real d: %+5.7d\n", 123);
	printf("Real d: %+3.7d\n", 12345);
	printf("Real d: %+3.5d\n", 1234567);

	printf("----------------------\n");
	long fgh = 123;
	long long tyu = 12345;
	ft_printf("User ld: %+7.5ld\n", fgh);
	ft_printf("User lld: %+7.3lld\n", tyu);
	printf("Real ld: %+7.5ld\n", fgh);
	printf("Real lld: %+7.3lld\n", tyu);


	printf("----------------------\n");

	ft_printf("User many: %d %i %5.3d%s\n %lx idk what more to test\n", 1, x, 1234567, asd, uli);
	printf("Real many: %d %i %5.3d%s\n %lx idk what more to test\n", 1, x, 1234567, asd, uli);

	printf("----------------------\n");
	ft_printf ("Characters: %c %c \n", 'a', 65);
   	ft_printf ("Decimals: %d %ld\n", 1977, 650000L);
    ft_printf ("Preceding with blanks: %10d \n", 1977);
	ft_printf ("Preceding with zeros: %010d \n", 1977);
    ft_printf ("Some different radices: %d %x %o %#10.5xh %7.5o \n", 100, 100, 100, 100, 100);
    ft_printf ("floats: %4.2f \n", 3.1416);
    ft_printf ("Width trick: %*d \n", 5, 10);
    ft_printf ("%s \n", "A string");	

    ft_printf ("===========================\n");	
	printf ("Characters: %c %c \n", 'a', 65);
   	printf ("Decimals: %d %ld\n", 1977, 650000L);
    printf ("Preceding with blanks: %10d \n", 1977);
	printf ("Preceding with zeros: %010d \n", 1977);
    printf ("Some different radices: %d %x %o %#10.5xh %7.5o \n", 100, 100, 100, 100, 100);
    printf ("floats: %4.2f \n", 3.1416);
    printf ("Width trick: %*d \n", 5, 10);
    printf ("%s \n", "A string");

	printf("----------------------\n");
	ft_printf("User o: %#o\n", x);
	printf("Real o: %#o\n", x);
	ft_printf("User x: %#x\n", x);
	printf("Real x: %#x\n", x);
	ft_printf("User X: %#X\n", x);
	printf("Real X: %#X\n", x);
	ft_printf("User o: %#20o\n", x);
	printf("Real o: %#20o\n", x);
	ft_printf("User x: %#20x\n", x);
	printf("Real x: %#20x\n", x);
	ft_printf("User X: %#20X\n", x);
	printf("Real X: %#20X\n", x);
	ft_printf("User o: %#20.10o\n", x);
	printf("Real o: %#20.10o\n", x);
	ft_printf("User x: %#20.10x\n", x);
	printf("Real x: %#20.10x\n", x);
	ft_printf("User X: %#20.10X\n", x);
	printf("Real X: %#20.10X\n", x);

	printf("----------------------\n");
	long double asd1 = -3123.82312;
	double d = -11.1;
	ft_printf("User f: %f\n", d);//
	printf("Real f: %f\n", d);//
	ft_printf("User .14f: %.18f\n", d);
	printf("Real .14f: %.18f\n", d);
	ft_printf("User +f: %+f\n", d);//
	printf("Real +f: %+f\n", d);//
	ft_printf("User f: %.3f\n", d);//
	printf("Real f: %.3f\n", d);//
	
	ft_printf("User f: %.18lf\n", d);
	printf("Real f: %.18lf\n", d);
	printf("----------------------\n");
	ft_printf("User s: %s\n", NULL);
	printf("User s: %s\n", NULL);

	ft_printf("p3 %.4s\n", NULL);
	printf("p3 %.4s\n", NULL);

	printf("----------------------\n");
	int result;
	result = 0;
	result = ft_printf("User d: %d\n", x);
	ft_printf("|%d|\n", result);
	result = 0;
	result = printf("Real d: %d\n", x);
	printf("|%d|\n", result);
	result = 0;
	result = ft_printf("User d: %10d\n", x);
	ft_printf("|%d|\n", result);
	result = 0;
	result = printf("Real d: %10d\n", x);
	printf("|%d|\n", result);
	result = 0;
	result = ft_printf("User d: %-20.10d\n", x);
	ft_printf("|%d|\n", result);
	result = 0;
	result = printf("Real d: %-20.10d\n", x);
	printf("|%d|\n", result);
	result = 0;
	result = ft_printf("%%");
	ft_printf("|%d|\n", result);
	result = 0;
	result = printf("%%");
	printf("|%d|\n", result);

	printf("----------------------\n");

	int r;
	r = 0;
	r = ft_printf("%5%\n");
	ft_printf("|%d|\n", r);
	r = printf("%5%\n");
	printf("|%d|\n", r);
	printf("----------------------\n");
	r = ft_printf("%.0%\n");
	ft_printf("|%d|\n", r);
	r = printf("%.0%\n");
	printf("|%d|\n", r);
	r = ft_printf("%.2s is a string", "this\n");
	ft_printf("|%d|\n", r);
	r = printf("%.2s is a string", "this\n");
	printf("|%d|\n", r);
	r = ft_printf("%   %");
	ft_printf("|%d|\n", r);
	r = printf("%   %");
	printf("|%d|\n", r);
	printf("----------------------\n");
	r = ft_printf("%d", 42);
	ft_printf("|%d|\n", r);
	r = printf("%d", 42);
	printf("|%d|\n", r);
	r = ft_printf("%+d", 42);
	ft_printf("|%d|\n", r);
	r = printf("%+d", 42);
	printf("|%d|\n", r);
	r = ft_printf("%+d", -42);
	ft_printf("|%d|\n", r);
	r = printf("%+d", -42);
	printf("|%d|\n", r);
	r = ft_printf("%d", -42);
	ft_printf("|%d|\n", r);
	r = printf("%d", -42);
	printf("|%d|\n", r);

	printf("----------------------\n");
	r = ft_printf("% d", 42);
	ft_printf("|%d|\n", r);
	r = printf("% d", 42);
	printf("|%d|\n", r);
	r = ft_printf("%+ d", 42);
	ft_printf("|%d|\n", r);
	r = printf("%+ d", 42);
	printf("|%d|\n", r);
	r = ft_printf("% +d", 42);
	ft_printf("|%d|\n", r);
	r = printf("% +d", 42);
	printf("|%d|\n", r);

	r = ft_printf("% d", -42);
	ft_printf("|%d|\n", r);
	r = printf("% d", -42);
	printf("|%d|\n", r);
	r = ft_printf("%+ d", -42);
	ft_printf("|%d|\n", r);
	r = printf("%+ d", -42);
	printf("|%d|\n", r);
	r = ft_printf("% +d", -42);
	ft_printf("|%d|\n", r);
	r = printf("% +d", -42);
	printf("|%d|\n", r);

	r = ft_printf("%   d", 42);
	ft_printf("|%d|\n", r);
	r = printf("%   d", 42);
	printf("|%d|\n", r);
	r = ft_printf("%++  d", 42);
	ft_printf("|%d|\n", r);
	r = printf("%++  d", 42);
	printf("|%d|\n", r);
	r = ft_printf("% ++d", 42);
	ft_printf("|%d|\n", r);
	r = printf("% ++d", 42);
	printf("|%d|\n", r);

	printf("----------------------\n");
	ft_printf("%.2s is a string\n", "");
	printf("%.2s is a string\n", "");
	ft_printf("%5.2s is a string\n", "");
	printf("%5.2s is a string\n", "");
	ft_printf("%-5.2s is a string\n", "");
	printf("%-5.2s is a string\n", "");

	printf("----------------------\n");
	r = ft_printf("%QR");
	ft_printf("|%d|\n", r);
	r = printf("%QR");
	printf("|%d|\n", r);

	r = ft_printf("%d, %.0d", 0, 2);
	ft_printf("|%d|\n", r);
	r = printf("%d, %.0d", 0, 2);
	printf("|%d|\n", r);
	r = ft_printf("%ld|%ld", 0l, 42l);
	ft_printf("|%d|\n", r);
	r = printf("%ld|%ld", 0l, 42l);
	printf("|%d|\n", r);
	r = ft_printf("%#.12x", 0);
	ft_printf("|%d|\n", r);
	r = printf("%#.12x", 0);
	printf("|%d|\n", r);
	r = ft_printf("%#13x", 123);
	ft_printf("|%d|\n", r);
	r = printf("%#13x", 123);
	printf("|%d|\n", r);
	r = ft_printf("%#x", 0);
	ft_printf("|%d|\n", r);
	r = printf("%#x", 0);
	printf("|%d|\n", r);
	ft_printf("%#08x < Aidsssss\n", 42);
	printf("%#08x\n", 42);
	ft_printf("%#-08x\n", 42);
	printf("%#-08x\n", 42);
	ft_printf("%#8x\n", 42);
	printf("%#8x\n", 42);
	r = ft_printf("% 10.5d", 4242);
	ft_printf("|%d|\n", r);
	r = printf("% 10.5d", 4242);
	printf("|%d|\n", r);


	printf("----------------------\n");
	r = ft_printf("%03.2d", 1);  // if %d '0' flags is useless
	ft_printf("|%d|\n", r);
	r = printf("%03.2d", 1);
	printf("|%d|\n", r);

	r = ft_printf("%-05d", -42);   //'-' and '0' the '0' ignored
	ft_printf("|%d|\n", r);
	r = printf("%-05d", -42);
	printf("|%d|\n", r);

	r = ft_printf("%0+5d", 42);  //ffs here its not useless but now it dose something new.
	ft_printf("|%d|\n", r);
	r = printf("%0+5d", 42);
	printf("|%d|\n", r);

	ft_printf ("Characters: %c %c \n", 'a', 65);
   	ft_printf ("Decimals: %d %ld\n", 1977, 650000L);
    ft_printf ("Some different radices: %d %x %o %#10.5xh %7.5o \n", 100, 100, 100, 100, 100);
    ft_printf ("floats: %4.2f \n", 3.1416);
    ft_printf ("Width trick: %*d \n", 5, 10);


	printf("----------ft_sprintf---------\n");

	char *oo;
	oo = ft_sprintf("User many: %d %i %5.3d%s\n %lx idk what more to test\n", 1, x, 1234567, asd, uli);
	ft_printf("%s", oo);
	free(oo);
	printf("----------------------\n");
	oo = ft_sprintf("Characters: %c %c \n", 'a', 65);
	ft_printf("%s", oo);
	free(oo);
   	oo = ft_sprintf("Decimals: %d %ld\n", 1977, 650000L);
	ft_printf("%s", oo);
	free(oo);
    oo = ft_sprintf("Some different radices: %d %x %o %#10.5xh %7.5o \n", 100, 100, 100, 100, 100);
	ft_printf("%s", oo);
	free(oo);
    oo = ft_sprintf("floats: %4.2f \n", 3.1416);
	ft_printf("%s", oo);
	free(oo);
    oo = ft_sprintf("Width trick: %*d \n", 5, 10);
	ft_printf("%s", oo);
	free(oo);


	printf("----------------------\n");
	char *g = ft_strdup("This is a  random long strting to test if shit works");
	r = ft_printf("{RED}%s{RESET}\n", g);
	ft_printf("{%d}\n", r);
	r = ft_printf("{GREEN}%s{RESET}\n", g);
	ft_printf("{%d}\n", r);
	r = ft_printf("{YELLOW}%s{RESET}\n", g);
	ft_printf("{%d}\n", r);
	r = ft_printf("{BLUE}%s{RESET}\n", g);
	ft_printf("{%d}\n", r);
	r = ft_printf("{MAGENTA}%s{RESET}\n", g);
	ft_printf("{%d}\n", r);
	r = ft_printf("{CYAN}%s{RESET}\n", g);
	ft_printf("{%d}\n", r);
	r = ft_printf("{WHITE}%s{RESET}\n", g);
	ft_printf("{%d}\n", r);
	/*
	r = ft_printf("{:RED}%s{RESET}\n", g);
	ft_printf("{%d}\n", r);
	r = ft_printf("{:GREEN}%s{RESET}\n", g);
	ft_printf("{%d}\n", r);
	r = ft_printf("{:YELLOW}%s{RESET}\n", g);
	ft_printf("{%d}\n", r);
	r = ft_printf("{:BLUE}%s{RESET}\n", g);
	ft_printf("{%d}\n", r);
	r = ft_printf("{:MAGENTA}%s{RESET}\n", g);
	ft_printf("{%d}\n", r);
	r = ft_printf("{:CYAN}%s{RESET}\n", g);
	ft_printf("{%d}\n", r);
	r = ft_printf("{:WHITE}{BLUE}%s{RESET}\n", g);
	ft_printf("{%d}\n", r);*/
	r = ft_printf("{UND}%s{RESET}\n", g);
	ft_printf("{%d}\n", r);
	r = ft_printf("{BOLD}%s{RESET}\n", g);
	ft_printf("{%d}\n", r);
	r = ft_printf("{GREEN}%s{YELLOW}%s{RESET}\n", "Nu skall jag skriva en long", " string for att se om de fungerar");
	printf("----------End---------\n");
	ft_printf("%#x\n", 1234);
	printf("%#x\n", 1234);
	printf("Time: %lf\n", ft_timer_end());
	return (0);
}
