/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbin-bak <hbin-bak@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 17:19:13 by hbin-bak          #+#    #+#             */
/*   Updated: 2025/08/27 19:38:51 by hbin-bak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int	str_len(char *str)
{
	int c;

	c = 0;
	while(str[c] != '\0')
		c++;
	return c;
}
void	string_cpy(char *dest,char *src)
{
	int	i;

	i = 0;
	while ( src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return;
}
char	*ft_strdup(char *src)
{	
	int size;
	char *ptr;
	char *dup;

	size = str_len(src);

	dup = (char *)malloc(size);

	string_cpy(dup,src);

	ptr = &dup[0];
	return ptr;
}

int	main()
{
	char str[] = "abcdefghij";
	
	char *target = ft_strdup(str);

	printf("%s", target);
	free(target);

	return 0;
}
