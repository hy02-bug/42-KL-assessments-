/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbin-bak <hbin-bak@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 21:11:43 by hbin-bak          #+#    #+#             */
/*   Updated: 2025/08/27 22:47:17 by hbin-bak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
    if (min >= max)
    {
        *range = NULL;
        return 0;
    }

    int size = max - min;
    *range = malloc(size * sizeof(int));
    if (!*range)
        return -1;

    for (int i = 0; i < size; i++)
        (*range)[i] = min + i;

    return size;   // return number of elements
}


int	main()
{
	int *arr;
	int size = ft_ultimate_range(&arr, 3, 7);

	if (size > 0)
	{
    		for (int i = 0; i < size; i++)
        	printf("%d ", arr[i]);
    		free(arr);
	}
}
