/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 12:13:51 by nneronin          #+#    #+#             */
/*   Updated: 2020/09/24 16:52:18 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "ft_printf/ft_printf.h"
#include "libft/libft.h"

// gcc test_main.c libft/libft.a ft_printf/ft_printf.h

int main(void)
{
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
	ft_printf("User s: %s\n", asd);  //.19 ??
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
	ft_printf("%"); 
	printf("%");
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
	free(oo);
    oo = ft_sprintf("floats: %4.2f \n", 3.1416);
	ft_printf("%s", oo);
	free(oo);
    oo = ft_sprintf("Width trick: %*d \n", 5, 10);
	ft_printf("%s", oo);
	free(oo);

	ft_printf ("Characters: %c %c \n", 'a', 65);
   	ft_printf ("Decimals: %d %ld\n", 1977, 650000L);
    ft_printf ("Some different radices: %d %x %o %#10.5xh %7.5o \n", 100, 100, 100, 100, 100);
    ft_printf ("floats: %4.2f \n", 3.1416);
    ft_printf ("Width trick: %*d \n", 5, 10);

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
	ft_printf("{%d}\n", r);
	r = ft_printf("{UND}%s{RESET}\n", g);
	ft_printf("{%d}\n", r);
	r = ft_printf("{BOLD}%s{RESET}\n", g);
	ft_printf("{%d}\n", r);
	r = ft_printf("{GREEN}%s{YELLOW}%s{RESET}\n", "Nu skall jag skriva en long", " string for att se om de fungerar");
	printf("----------End---------\n");
	ft_printf("Time: %lf\n", ft_timer_end());
	return (0);
}
