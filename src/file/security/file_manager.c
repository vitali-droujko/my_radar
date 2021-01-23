/*
** EPITECH PROJECT, 2020
** my_radar
** File description:
** file manager
*/

#include "../../../include/my.h"

static int my_power(int j, int b)
{
    int c = 1;
    while (j != 0) {
        c = b * c;
        j--;
    }
    return (c);
}

static char *int_to_str(int nb)
{
    int c = nb;
    int i = 0;
    int j = 0;
    char *dest;

    while (nb > 9) {
        nb = nb / 10;
        i++;
    }
    dest = malloc(sizeof(char) * (i + 1));
    while (i != -1) {
        int b = (c / my_power(i, 10));
        dest[j] = ((b % 10) + 48);
        i--;
        j++;
    }
    dest[j] = '\0';
    return (dest);
}

int file_manager(int nb_error)
{
    char *str_err;
    if (nb_error == 0)
        return (0);
    else {
        str_err = int_to_str(nb_error);
        write(1, "There is something wrong with script.\n", 39);
        write(1, "Detected : ", 11);
        write(1, str_err, my_strlen(str_err));
        write(1, " errors.\n", 10);
        write(1, "Run again with : ./my_radar [OPTION] -w\n", 41);
        return (84);
    }
}