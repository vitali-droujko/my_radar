/*
** EPITECH PROJECT, 2020
** B-MUL-100-NCE-1-1-myradar-vitali.droujko [WSL: Ubuntu]
** File description:
** fill_array.c
*/

#include "../include/my.h"

void fill_plane_array(plan_t *plan)
{
    int i = 0, j = 0, a = count_plane(plan);

    plan->posa_plane = malloc(sizeof(sfVector2f)* (a + 2));
    plan->posb_plane = malloc(sizeof(sfVector2f)* (a + 2));
    plan->speed_plane = malloc(sizeof(sfVector2f) * (a + 2));
    plan->radius_plane = malloc(sizeof(float) * (a + 2));

    while (plan->disp[i] != NULL) {
        if (TYPE[0] == 'A') {
            plan->posa_plane[j].x = (float)my_getnbr(AX_SIZE);
            plan->posa_plane[j].y = (float)my_getnbr(AY_SIZE);
            plan->posb_plane[j].x = (float)my_getnbr(BX_SIZE);
            plan->posb_plane[j].y = (float)my_getnbr(BY_SIZE);
            plan->speed_plane[j] = get_speed(plan, i);
            plan->radius_plane[j] = get_angle(plan, i, j);
            j++;
        }
        i++;
    }
    return;
}