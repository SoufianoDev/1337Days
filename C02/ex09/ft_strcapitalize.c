

char *ft_strcapitalize(char *str)
{

    int i = 0;
    int isUpper = 1;

    while (str[i] != '\0')
    {

        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (isUpper)
            {
                str[i] -= ('a' - 'A');
                isUpper = 0;
            }
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {

            if (!isUpper)
            {
                str[i] += ('a' - 'A');
                isUpper = 0;
            }
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {

            isUpper = 0;
        }
        else
        {

            isUpper = 1;
        }

        i++;
    }

    return str;
}