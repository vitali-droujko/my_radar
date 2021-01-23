/*
** EPITECH PROJECT, 2020
** Github [WSL: Ubuntu] - my_radar
** File description:
** free 3D array
*/

#include "../../include/my.h"

void free_treble(plan_t *plan)
{
    for (int i = 0; plan->disp[i]; i++) {
        for (int j = 0; plan->disp[i][j]; j++) {
            free(plan->disp[i][j]);
        }
        free(plan->disp[i]);
    }
    free(plan->disp);
    free(plan->buff);
    return;
}