/*
** EPITECH PROJECT, 2020
** Github [WSL: Ubuntu] - my_radar
** File description:
** print 3D array
*/

#include "../../include/my.h"

void print_treble(char ***tbl)
{
    int i = 0;
    int j = 0;

    while (tbl[i] != NULL) {
        j = 0;
        while (tbl[i][j] != NULL) {
            my_putstr(tbl[i][j]);
            my_putchar(' ');
            j++;
        }
        i++;
    }
    return;
}
