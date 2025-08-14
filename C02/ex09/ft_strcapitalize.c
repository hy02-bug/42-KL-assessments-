/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbin-bak <hbin-bak@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 23:51:02 by hbin-bak          #+#    #+#             */
/*   Updated: 2025/08/14 15:10:41 by hbin-bak         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>
#include <unistd.h>
char ft_char_upcase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        ch -= 32;
    return ch;
}

int str_is_alphanumeric(char ch)
{
    if ((ch >= '0' && ch <= '9') ||
        (ch >= 'A' && ch <= 'Z') ||
        (ch >= 'a' && ch <= 'z'))
        return 1;
    else
        return 0;
}

char *ft_strcapitalize(char *str)
{
    int i = 0;
    int new_word = 1; 

    while (str[i] != '\0')
    {
        if (str_is_alphanumeric(str[i]))
        {
            if (new_word) 
                str[i] = ft_char_upcase(str[i]);
            new_word = 0; 
        }
        else
        {
            new_word = 1; 
        }
        i++;
    }
    return str;
}

int main()
{
    char text[] = "hi, how are you? 42words forty-two; fifty+and+one";
    ft_strcapitalize(text);
    printf("%s\n", text);
    return 0;
}
