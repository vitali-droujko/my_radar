/*
** EPITECH PROJECT, 2020
** B-MUL-100-NCE-1-1-myradar-vitali.droujko [WSL: Ubuntu]
** File description:
** count_type.c
*/

#include "../../include/my.h"

int count_tower(plan_t *plan)
{
    int i = 0;
    int j = 0;

    while (plan->disp[i] != NULL) {
        if (TYPE[0] == 'T')
            j++;
        i++;
    }
    return (j);
}

int count_plane(plan_t *plan)
{
    int i = 0;
    int j = 0;

    while (plan->disp[i]) {
        if (TYPE[0] == 'A')
            j++;
        i++;
    }
    return (j);
}