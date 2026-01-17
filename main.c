#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void	fun_test(char *var, ...)
{
	va_list	grp;

	va_start(grp, var);
	printf("%s", var);
	for (int i = 0; i < 4; ++i)
	{
		printf("%s", va_arg(grp, char *));
	}
	va_end(grp);
}
int	main(void)
{
	printf("%p", NULL);
}
