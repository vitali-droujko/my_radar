/*
** EPITECH PROJECT, 2020
** B-MUL-100-NCE-1-1-myradar-vitali.droujko [WSL: Ubuntu]
** File description:
** fill_array.c
*/

#include "../include/my.h"

void fill_tower_array(plan_t *plan)
{
    int i = 0;
    int j = 0;
    int a = count_tower(plan);

    plan->tower = malloc(sizeof(sfVector2f) * (a + 2));
    plan->radius_tower = malloc(sizeof(float) * (a + 2));
    while (plan->disp[i] != NULL) {
        if (TYPE[0] == 'T') {
            plan->tower[j].x = (float)my_getnbr(AX_SIZE);
            plan->tower[j].y = (float)my_getnbr(AY_SIZE);
            plan->radius_tower[j] = (float)(my_getnbr(RADIUS)*1300/100);
            j++;
        }
        i++;
    }
    return;
}