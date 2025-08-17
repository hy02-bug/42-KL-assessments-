/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_views.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 16:58:40 by rchai             #+#    #+#             */
/*   Updated: 2025/08/17 16:59:15 by rchai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_visible_row_left(int row, int board[4][4]);
int	count_visible_row_right(int row, int board[4][4]);
int	count_visible_col_top(int col, int board[4][4]);
int	count_visible_col_bottom(int col, int board[4][4]);

int	check_views(int board[4][4], int views[16])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (count_visible_col_top(i, board) != views[i])
			return (0);
		if (count_visible_col_bottom(i, board) != views[4 + i])
			return (0);
		if (count_visible_row_left(i, board) != views[8 + i])
			return (0);
		if (count_visible_row_right(i, board) != views[12 + i])
			return (0);
		i++;
	}
	return (1);
}
