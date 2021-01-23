/*
** EPITECH PROJECT, 2020
** B-MUL-100-NCE-1-1-myradar-vitali.droujko [WSL: Ubuntu]
** File description:
** fill_array.c
*/

#include "../../include/my.h"

sfVector2f get_speed(plan_t *plan, int i)
{
    float NA;
    sfVector2f vect = {0, 0};

    vect.x = XB - XA;
    vect.y = YB - YA;
    NA = sqrt(vect.x * vect.x + vect.y * vect.y);
    vect.x = (vect.x / NA) * my_getnbr(SPEED);
    vect.y = (vect.y / NA) * my_getnbr(SPEED);
    return (vect);
}