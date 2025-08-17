/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 17:03:49 by rchai             #+#    #+#             */
/*   Updated: 2025/08/17 17:08:58 by rchai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid_placement(int row, int col, int num, int board[4][4]);
int	check_views(int board[4][4], int views[16]);
int	check_views_partial(int row, int col, int board[4][4], int views[16]);

int	solve(int row, int col, int board[4][4], int views[16])
{
	int	num;

	if (row == 4)
		return (check_views(board, views));
	if (col == 4)
		return (solve(row + 1, 0, board, views));
	num = 1;
	while (num <= 4)
	{
		if (is_valid_placement(row, col, num, board))
		{
			board[row][col] = num;
			if (check_views_partial(row, col, board, views)
				&& solve(row, col + 1,
					board, views))
				return (1);
			board[row][col] = 0;
		}
		num++;
	}
	return (0);
}
