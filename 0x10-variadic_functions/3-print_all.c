#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints a list of arguments based on the provided format
 * @format:types of arguments*/
void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr = format;
	char *s_arg;
	int first_arg = 1;
	va_start(args, format);
	while (*ptr)
	{
		if (!first_arg)
			printf(", ");
		switch (*ptr)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s_arg = va_arg(args, char *);
				printf("%s",(s_arg == NULL) ? "(nil)" : s_arg);
				break;
		}
		first_arg = 0;
		ptr++;
	}
	va_end(args);
	printf("\n");
}
