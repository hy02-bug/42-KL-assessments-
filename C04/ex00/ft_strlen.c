/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbin-bak <hbin-bak@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:21:52 by hbin-bak          #+#    #+#             */
/*   Updated: 2025/08/20 16:30:19 by hbin-bak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while(*str != '\0')
	{
		count +=1;
		str++;
	}
	return count;
}

int	main()
{
	char a[] = "ABCDEF";
	int b;
	printf("%d",b = ft_strlen(a));

	return 0;
}

