
#include <stdio.h>

int     ft_str_is_printable(char *str)
{
    if (!(*str))
        return(1);
     while (*str)
     {
        if(!(*str >= ' ' && *str <= '~'))
         return(0);
        str++;
     }
        return (1);
}

int     main()
{
    char stra[] = "viva\nla\nvida";
    char strb[] = "vivalavida";

    printf ( "%d\n", ft_str_is_numeric(stra));
    printf ( "%d\n", ft_str_is_numeric(strb));

    return 0;
}
