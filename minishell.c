#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
    int i;

    while(str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main()
{
	ft_putstr("Hola Mundo!");
	return(0);
}

int ft_putstr(char *str)
{
    int i = 0;

    while (str[i])
        write(1, &str[i++], 1);
    return i;
}