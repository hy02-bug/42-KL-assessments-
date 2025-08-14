/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbin-bak <hbin-bak@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 22:46:52 by hbin-bak          #+#    #+#             */
/*   Updated: 2025/08/13 23:28:07 by hbin-bak         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>
#include <stdio.h>
char    *ft_strupcase(char *str);
char    *ft_strupcase(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }        
            i++;
    }
    return str;
}
// int main(){
//     char    text[] = "abc123defg";
//     ft_strupcase(text);
//     printf("%s",text);
// }
