#include <stdio.h>

int main()
{
	return(printf("Hola Mundo!"));
}

int ft_putstr(char *str)
{
    int i = 0;

    while (str[i])
        write(1, &str[i++], 1);
    return i;
}