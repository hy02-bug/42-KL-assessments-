/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbin-bak <hbin-bak@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 19:40:06 by hbin-bak          #+#    #+#             */
/*   Updated: 2025/08/27 21:09:08 by hbin-bak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min,int max)
{
	int n;
	int i;

	i = 0;
	n = max - min;

	if (min >= max)
		return NULL;

	int *arr = (int *)malloc(n * sizeof(int));

	if(!arr)
		return NULL;

	while( i < n)
	{
		arr[i] = min + i;
		i++;
	}
	return arr;
}

int	main()
{
	int min = 6;

	int max = 10;

	int *num = ft_range(min,max);
	
	int i = 0;
	while (i < (max - min))
	{
		printf("%d, ",num[i]);
		i++;
	}
	free(num);
	return 0;
}
