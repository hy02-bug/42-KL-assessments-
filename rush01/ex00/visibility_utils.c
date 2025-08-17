/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibility_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 15:35:17 by rchai             #+#    #+#             */
/*   Updated: 2025/08/17 17:12:51 by rchai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_visible_row_left(int row, int board[4][4])
{
	int	max;
	int	count;
	int	i;
	int	val;

	max = 0;
	count = 0;
	i = 0;
	while (i < 4)
	{
		val = board[row][i];
		if (val > max)
		{
			max = val;
			count++;
		}
		i++;
	}
	return (count);
}

int	count_visible_row_right(int row, int board[4][4])
{
	int	max;
	int	count;
	int	val;
	int	i;

	max = 0;
	count = 0;
	i = 3;
	while (i >= 0)
	{
		val = board[row][i];
		if (val > max)
		{
			max = val;
			count++;
		}
		i--;
	}
	return (count);
}

int	count_visible_col_top(int col, int board[4][4])
{
	int	max;
	int	count;
	int	val;
	int	i;

	max = 0;
	count = 0;
	i = 0;
	while (i < 4)
	{
		val = board[i][col];
		if (val > max)
		{
			max = val;
			count++;
		}
		i++;
	}
	return (count);
}

int	count_visible_col_bottom(int col, int board[4][4])
{
	int	max;
	int	count;
	int	i;
	int	val;

	max = 0;
	count = 0;
	i = 3;
	while (i >= 0)
	{
		val = board[i][col];
		if (val > max)
		{
			max = val;
			count++;
		}
		i--;
	}
	return (count);
}
