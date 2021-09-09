#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>


static int ft_check(const char fmt)
{
	return (fmt == 'c' || fmt == 's' || fmt == 'p'|| fmt == 'd'||fmt == 'i'
	|| fmt == 'u' || fmt == 'x' || fmt == 'X' || fmt == '%');
}


int	ft_printf(const char *fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	int sum;

	sum = 0;
	while(*fmt)
	{
		if(*fmt == '%'  && ft_check(*(fmt + 1) ))
		{
			if (*(fmt + 1) == 'c')
				sum += ft_put_char(&fmt, va_arg(ap, int));
			else if (*(fmt + 1) == 's')
				sum += ft_put_string(&fmt, va_arg(ap, char *));
			else if (*(fmt + 1) == 'p')
				sum += ft_put_pointer(&fmt, va_arg(ap, unsigned long));
			else if(*(fmt + 1) == 'i' || *(fmt + 1) == 'd')
				sum += ft_put_integer(&fmt, va_arg(ap, int));
			else if(*(fmt +1) == 'u')
				sum += ft_put_unsigned(&fmt, va_arg(ap, unsigned int));
			else if(*(fmt +1) == 'x' || *(fmt+ 1) == 'X' )
				sum += ft_put_hexadecimal(&fmt, va_arg(ap, unsigned long));
			else if(*(fmt +1) == '%')
				sum += ft_put_char(&fmt, '%');
		}
		else if (*fmt != '%')
		{
			ft_putchar_fd(fmt[0] , 1);
			sum ++;
			fmt++;
		}
	}
	va_end(ap);
	return (sum);
}

//cspdiuxX%


// int main (void)
// {
// 	int n;
// 	n = printf("%llx\n", 9223372036854775807LL);
// 	printf("%i\n", n);
// 	ft_printf("%x\n", 9223372036854775807LL);
// 	printf("%i\n", n);
// }

// int	main(void)
// {
// 	// string
// 	char *s;
// 	s = "isso é um teste filho da puta";

// 	//char
// 	char l;
// 	l = 'd';

// // 	//inteiro
// 	int i;
// 	i = -2712315;

// // 	//ponteiro
// 	int *p;
// 	p = &i;

	// printf("============================================================\n");
	// printf("ORIGI string: %s pos impressao\n", s);
	// ft_printf("COPIA string: %s pos impressao\n", s);
	// printf("============================================================\n");
	// printf("ORIGI char: %c pos impressao\n", l);
	// ft_printf("COPIA char: %c pos impressao\n", l);
	// printf("============================================================\n");
	// printf("ORIGI ponteiro: %p\n", p);
	// ft_printf("COPIA ponteiro: %p \n", p);
	// printf("============================================================\n");
	// printf("ORIGI inteiro: %i pos impressao\n", i);
	// ft_printf("COPIA inteiro: %i pos impressao\n", i);
	// printf("============================================================\n");
	// printf("ORIGI unsigned: %u\n", -500);
	// ft_printf("COPIA unsigned: %u\n", -500);
	// printf("============================================================\n");
	// printf("ORIGI hex caixa baixa: %x\n", i);
	// ft_printf("COPIA hex caixa baixa: %x\n", i);
	// printf("============================================================\n");
	// printf("ORIGI HEX caixa alta: %X\n", i);
	// ft_printf("COPIA HEX caixa alta: %X\n", i);
	// printf("============================================================\n");
	// printf("ORIGI decimal: %d pos impressao\n", i);
	// ft_printf("COPIA decimal: %d pos impressao\n", i);
	// printf("============================================================\n");
	// printf("ORIGI %% teste\n");
	// ft_printf("COPIA %% teste\n");
	// printf("============================================================\n");
	// printf("ORIGI %    % teste\n");
	// ft_printf("COPIA %    % teste\n");


// }



	// while(fmt[i] != '%' && fmt[i]) //verificar cada uma das posicoes
	// {
	// 	ft_putchar_fd((char)fmt[i], 1);
	// 	i++;
	// }
