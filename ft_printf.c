#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

// static	void ft_print_fmt(int *i, const char* fmt)
// {
// 	*i = *i + 1; // pq eu comeco no -1 e comeco a verificar posicao apos
// 	while(fmt[*i] != '%' && fmt[*i]) //verificar cada uma das posicoes
// 	{
// 		ft_putchar_fd((char)fmt[*i], 1);
// 		*i = *i + 1;
// 	}
// 	*i = *i + 1; //pra pular o que ja foi verificado
// }


int	ft_printf(const char *fmt, ...)
{
	int i;
	va_list ap; //cria a lista que vai acumular os argumentos

	va_start(ap, fmt); //todas as pocicoes a partir do fmt(ultimo arg fixo)

	i = 0;
	while(fmt[i])
	{
		if(fmt[i] == '%')
		{
			i++;
			if (fmt[i] == 's')
			{
				ft_putstr_fd(va_arg(ap, char *), 1);
			}
			else if (fmt[i] == 'c')
			{
				ft_putchar_fd(va_arg(ap, int), 1);
			}
			else if  (fmt[i] == 'i')
			{
					ft_putnbr_fd(va_arg(ap, int), 1);
				}
			else if  (fmt[i] == 'd')
			{
					ft_putnbr_fd(va_arg(ap, int), 1);
				}
			else if  (fmt[i] == 'p')
			{
				write(1, "0x", 2);
				ft_putstr_fd(ft_itoa_base(va_arg(ap, unsigned long), "0123456789abcdef") ,1);
			}
			else if  (fmt[i] == 'x')
			{
				ft_putstr_fd(ft_itoa_base(va_arg(ap, unsigned long), "0123456789abcdef") ,1);
			}
			else if  (fmt[i] == 'X')
			{
				ft_putstr_fd(ft_itoa_base(va_arg(ap, unsigned long), "0123456789ABCDEF") ,1);
			}
			else if  (fmt[i] == 'u')
			{
				ft_putstr_fd(ft_itoa_base(va_arg(ap, unsigned int), "0123456789") ,1);
			}
		}
		else
		{
			ft_putchar_fd(fmt[i], 1);
		}
		i++;
	}
	va_end(ap); //free no que foi gasto de memoria
	return (0);
}

// int	main(void)
// {
// 	// string
// 	char *s;
// 	s = "isso é um teste filho da puta";

// 	//char
// 	char l;
// 	l = 'd';

// 	//inteiro
// 	int i;
// 	i = -2712315;

// 	//ponteiro
// 	int *p;
// 	p = &i;

// 	printf("============================================================\n");
// 	printf("ORIGI string: %s pos impressao\n", s);
// 	ft_printf("COPIA string: %s pos impressao\n", s);
// 	printf("============================================================\n");
// 	printf("ORIGI char: %c pos impressao\n", l);
// 	ft_printf("COPIA char: %c pos impressao\n", l);
// 	printf("============================================================\n");
// 	printf("ORIGI inteiro: %i pos impressao\n", i);
// 	ft_printf("COPIA inteiro: %i pos impressao\n", i);
// 	printf("============================================================\n");
// 	printf("ORIGI ponteiro: %p\n", p);
// 	ft_printf("COPIA ponteiro: %p \n", p);
// 	printf("============================================================\n");
// 	printf("ORIGI HEX caixa alta: %X\n", i);
// 	ft_printf("COPIA HEX caixa alta: %X\n", i);
// 	printf("============================================================\n");
// 	printf("ORIGI hex caixa baixa: %x\n", i);
// 	ft_printf("COPIA hex caixa baixa: %x\n", i);
// 	printf("============================================================\n");
// 	printf("ORIGI decimal: %d pos impressao\n", i);
// 	ft_printf("COPIA decimal: %d pos impressao\n", i);
// 	printf("============================================================\n");
// 	printf("ORIGI unsigned: %u\n", -500);
// 	ft_printf("COPIA unsigned: %u\n", -500);


// }


// 	// while(fmt[i] != '%' && fmt[i]) //verificar cada uma das posicoes
// 	// {
// 	// 	ft_putchar_fd((char)fmt[i], 1);
// 	// 	i++;
// 	// }
