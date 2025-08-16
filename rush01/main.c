/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbin-bak <hbin-bak@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 17:19:22 by hbin-bak          #+#    #+#             */
/*   Updated: 2025/08/16 21:30:32 by hbin-bak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
    int	i = 0;

    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

//function to input grid of clues
void	input_clue_grid(char *str,int *temp,int array [4][4])
{
	if (temp [1] == 4)
	{
		temp[1] = 0;//reset col
		temp[2] += 1;// move new row	
	}
	array[temp[2]][temp[1]] = str[temp[0]] - 48;
       	temp[1]++;
	temp[0]++;
		
}
//function to check input is correct
int	check_input(char *str,int *temp,int array[4][4])
{
	while (str[temp[0]] != '\0')
	{
		if (str[temp[0]] >= '1' && str[temp[0]] <= '4')
		{
			input_clue_grid(str, temp, array);
		}
		else if (str[temp[0]] == ' ')
		{
			temp[0]++;
		}
		else 
			ft_putstr("Error\n");
	}
}

int	main(int argc, char **argv)
{
	int	clue_grid[4][4];
	int	i;
	int	cursor[3]; // this act temp array to iterate string and store into clues 
	
	i = 0;

	while (i < 3)
	{
		cursor[i] = 0;
		i++;
	}
    	if (argc == 2)	// must have exactly one  parameter from cmd
	{
		check_input( argv[1], cursor, clue_grid);
	}
	else 
	{
		ft_putstr("Error\n");
	}

}
