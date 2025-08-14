char    *ft_strcapitalize(char *str);
char    ft_char_upcase(char ch)
{
        if (ch >= 'a' && ch <= 'z')
        {
            ch -= 32;
        }        
    return ch;
}
int     str_is_alphanumeric(char ch)
{
    if ((ch >= '0' && ch <= '9') ||
        (ch >= 'A' && ch <= 'Z') ||
        (ch >= 'a' && ch <= 'z'))
        return 1;
    else
        return 0;
}

char    *ft_strcapitalize(char *str)
{
    int alpnum;
    int i;
    
    while (str[i] != '\0')
    {
        alpnum = str_is_alphanumeric(str[i]);

        if (alpnum == 0){
            str[i+1]=ft_char_upcase(str[i+1]);
        }
    }
    return str;
}