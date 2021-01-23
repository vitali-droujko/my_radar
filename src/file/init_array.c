/*
** EPITECH PROJECT, 2020
** Github [WSL: Ubuntu] - my_radar
** File description:
** Initialize an 3D array
*/

#include "../../include/my.h"

char ***init_array(int m, int n, int o)
{
    char ***tbl;
    tbl = malloc(sizeof(char **) * m);
    for (int i = 0; i < m; i++) {
        tbl[i] = malloc(sizeof(char **) * n);
        for (int j = 0; j < n; j++)
            tbl[i][j] = malloc(sizeof(char *) * o);
    }
    return (tbl);
}