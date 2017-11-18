/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 20:03:00 by tfontain          #+#    #+#             */
/*   Updated: 2017/11/18 22:31:51 by tfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

static void			error(void)
{
	ft_putstr("Error\n");
	exit(-1);
}

static intmax_t			*fill_stack(int ac, const char *av[])
{
	intmax_t				*stack;
	intmax_t				*ret;

	--ac;
	stack = malloc(sizeof(intmax_t) * ac);
	ret = stack;
	while (ac)
	{
		*stack = ft_atoi(av[ac]);
		--ac;
		++stack;
	}
	return (ret);
}

static void				swapintmaxt(intmax_t *a, intmax_t *b)
{
	intmax_t		tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

static int			solve(intmax_t *a, intmax_t *b, size_t na)
{
	char			buffer[4];
	size_t			nb;

	nb = 0;
	while (read(STDIN_FILENO, buffer, 4) == 4)
	{
		if (ft_strequ(buffer, SA))
		{
			if (!(na < 2))
				swapintmaxt(&(a[na - 1]), &(a[na - 2]));
		}
		else if (ft_strequ(buffer, SB))
		{
			if (!(nb < 2))
				swapintmaxt(&(b[nb - 1]), &(b[nb - 2]));
		}
		else if (ft_strequ(buffer, SS))
		{
			if (!(na < 2))
				swapintmaxt(&(a[na - 1]), &(a[na - 2]));
			if (!(nb < 2))
				swapintmaxt(&(b[nb - 1]), &(b[nb - 2]));
		}
		else if (ft_strequ(buffer, PA))
		{
			if (nb != 0)
			{
				a[na] = b[nb - 1];
				++na;
				--nb;
			}
		}
		else if (ft_strequ(buffer, PB))
		{
			if (nb != 0)
			{
				b[nb] = a[na - 1];
				++nb;
				--na;
			}
		}
		else if (ft_strequ(buffer, RA))
		{
			while ()
				;
		}
		else if (ft_strequ(buffer, RB))
		{
		}
		else if (ft_strequ(buffer, RR))
		{
		}
		else if (ft_strequ(buffer, RRA))
		{
		}
		else if (ft_strequ(buffer, RRB))
		{
		}
		else if (ft_strequ(buffer, RRR))
		{
		}
		else if (ft_strequ(buffer, "\n"))
			return (1); // 1 si trie, 0 si non trie, -1 si b est pas vide ou erreur
		else
			error();
	}
	return (-1);
}

int					main(int argc, const char *argv[])
{
	intmax_t		*a;
	intmax_t		*b;

	a = fill_stack(argc, argv);
	b = ft_memalloc(sizeof(intmax_t) * (argc - 1));
	solve(a, b, argc - 1);



	/*
	int i = 0;
	--argc;
	while (i < argc)
	{
		ft_putnbr(a[i]);
		ft_putchar('\n');
		++i;
	}
	*/
	return (0);
}












