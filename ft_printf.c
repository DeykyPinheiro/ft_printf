#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

static	void ft_print_fmt(int *i, const char* fmt)
{
	*i = *i + 1; // pq eu comeco no -1 e comeco a verificar posicao apos
	while(fmt[*i] != '%' && fmt[*i]) //verificar cada uma das posicoes
	{
		ft_putchar_fd((char)fmt[*i], 1);
		*i = *i + 1;
	}
	*i = *i + 1; //pra pular o que ja foi verificado
}


int	ft_printf(const char *fmt, ...)
{
	va_list ap; //cria a lista que vai acumular os argumentos
	va_start(ap, fmt); //todas as pocicoes a partir do fmt(ultimo arg fixo)
	int i;

	i = -1;
	ft_print_fmt(&i, fmt);
	if (fmt[i] == 's')
	{
		ft_putstr_fd(va_arg(ap, char *), 1);
		ft_print_fmt(&i, fmt);
	}
	if (fmt[i] == 'c')
	{
		ft_putchar_fd(va_arg(ap, int), 1);
		ft_print_fmt(&i, fmt);
	}
	if (fmt[i] == 'i')
	{
			ft_putnbr_fd(va_arg(ap, int), 1);
			ft_print_fmt(&i, fmt);
	}

	va_end(ap); //free no que foi gasto de memoria
	return (0);
}

int	main(void)
{
	// string
	char *s;
	s = "isso é um teste filho da puta";

	//char
	char l;
	l = 'd';

	//inteiro
	int i;
	i = 10;

	printf("============================================================\n");
	printf("ORIGI string: %s pos impressao\n", s);
	ft_printf("COPIA string: %s pos impressao\n", s);
	printf("============================================================\n");
	printf("ORIGI char: %c pos impressao\n", l);
	ft_printf("COPIA char: %c pos impressao\n", l);
	printf("============================================================\n");
	printf("ORIGI inteiro: %i pos impressao\n", i);
	ft_printf("COPIA inteiro: %i pos impressao\n", i);
	printf("============================================================\n");
	printf("");


}


	// while(fmt[i] != '%' && fmt[i]) //verificar cada uma das posicoes
	// {
	// 	ft_putchar_fd((char)fmt[i], 1);
	// 	i++;
	// }
