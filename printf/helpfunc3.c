#include "ft_printf.h"

void	free_s(t_pf *st)
{
	st->width = 0;
	st->precision = -1;
	ft_bzero(st->flag, ft_strlen(st->flag));
	st->znak = 0;
	ft_bzero(st->size, ft_strlen(st->size));
//	st->specifier = '\0';
}

void	check_z(t_pf *st)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = NULL;
	while (st->str[i])
	{
		if (st->str[i] == 'Z')
		{
			(st->str) += (i + 1);
			tmp = ft_strjoin(st->res, "Z");
			free(st->res);
			st->res = tmp;
		}
		i++;
	}
}
