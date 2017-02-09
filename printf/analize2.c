#include "ft_printf.h"

void	f_6(char cpecif, char *size, va_list vl, char **buffer)
{
	double		tmp;
	size_t		value;
	char		*ptr;
	char		*ptr1;

	if (cpecif == 'e')
	{
/*		if (size[0] == '\0')
		{
			tmp = (long double)va_arg(vl, long double);
			value = tmp;
			*buffer = ft_itoa_mod(value);
			ptr = *buffer;
			ptr1 = ft_itoa_base((tmp * ft_pow(10, num_len(tmp))), 10);
			printf ("ptr = %s ptr1 = %s\n", ptr, ptr1);
			ptr1 += (ft_strlen(ptr) - 1);
			*buffer = ft_strcat(ptr, ptr1);
			ft_strdel(&ptr);
		}
*/	}
//	else if (cpecif == 'c' || cpecif == 's')
//		f_7(cpecif, size, vl, buffer);
}

void	f_7(char cpecif, char *size, va_list vl, char **buffer, t_pf *st)
{
	char	*tmp;

	tmp = NULL;
	if (cpecif == 'c')
	{
		if (size[0] == '\0' || size[0] == 'l')
			**buffer = (char)va_arg(vl, int);
	}
	else
		if (size[0] == '\0')
		{
			*buffer = va_arg(vl, char *);
			if (*buffer == NULL)
				*buffer = "(null)";
			if (st->precision < ft_strlen(*buffer) && st->precision > 0)
			{
				tmp = ft_strnew(st->precision);
				tmp = ft_strncpy(tmp, st->buffer, st->precision);
				st->buffer = tmp;
			}
			else
				st->precision = 0;
		}
}

void	f_8(char cpecif, char *size, va_list vl, char **buffer, t_pf *st)
{
	char	*tmp;
	void*	i;

	i = va_arg(vl, void*);
	if (i == 0 && st->point == 1)
	{
		*buffer = "";
	}
	else if (st->width > st->precision)
	{
		*buffer = ft_itoa_base_low((long long)i, 16);
		tmp = ft_strjoin("0x", *buffer);
		*buffer = tmp;
	}
	else
		*buffer = ft_itoa_base_low((long long)i, 16);


	/**buffer = ft_itoa_base_low((long long)i, 16);
	tmp = ft_strjoin("0ax", *buffer);
	*buffer = tmp;*/
	
	
}
