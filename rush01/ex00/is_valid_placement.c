/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_placement.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 17:02:45 by rchai             #+#    #+#             */
/*   Updated: 2025/08/17 17:03:00 by rchai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid_placement(int row, int col, int num, int board[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (board[row][i] == num || board[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}
