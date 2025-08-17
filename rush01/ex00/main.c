/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 15:45:38 by rchai             #+#    #+#             */
/*   Updated: 2025/08/17 16:56:36 by rchai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	parse_input(char *arg, int views[16]);
int	solve(int row, int col, int board[4][4], int views[16]);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	ft_putchar(n + '0');
}

void	print_board(int board[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(board[i][j]);
			if (j < 3)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	*ft_bzero(void *ptr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(ptr + i) = 0;
		i++;
	}
	return (ptr);
}

int	main(int argc, char **argv)
{
	int	board[4][4];
	int	views[16];

	if (argc != 2 || !parse_input(argv[1], views))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	ft_bzero(board, sizeof(int) * 4 * 4);
	if (!solve(0, 0, board, views))
		write(1, "Error\n", 6);
	else
		print_board(board);
	return (0);
}
