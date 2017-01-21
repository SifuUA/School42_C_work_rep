#include "ft_printf.h"

void	nbr_to_str(unsigned int value, unsigned int base, char **str)
{
	char c;

	if (value >= base)
	{
		nbr_to_str(value/base, base, str);
		nbr_to_str(value%base, base, str);
	}
	else
	{
		if (value > 9)
			c = value + 'A' - 10;
		else
			c = value + '0';
		**str = c;
		(*str)++;
	}
	**str = '\0';
}

char	*ft_itoa_base_unsign(unsigned long long int value, unsigned long long int base)
{
	char	*str;
	char	*s;
	
	str = (char*)malloc(sizeof(char) * 33);
	*str = 0;
	s = str;
	if (base < 2 || base > 16)
		return (s);
	nbr_to_str(value, base, &str);
	return (s);
}
