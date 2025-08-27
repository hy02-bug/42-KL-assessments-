/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbin-bak <hbin-bak@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:47:53 by hbin-bak          #+#    #+#             */
/*   Updated: 2025/08/20 15:22:36 by hbin-bak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1,char *s2)
{
	int i;

	i=0;
	while (s1[i] != '\0')
	{
		if (s1[i] > s2[i])
			return -1;
		if (s1[i] < s2[i])
			return 1;
		else
		i++;
	}
	return 0;
}

/*int	main()
{
	char x[]="ONE";
	char y[]="TWO";
	char z[]="ONE";
	char w[]="JOM";

	int a = ft_strcmp(x,y);
	int b = ft_strcmp(x,z);
	int c = ft_strcmp(x,w);

	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);

	return 0;
}*/
