/*
** EPITECH PROJECT, 2020
** B-MUL-100-NCE-1-1-myradar-vitali.droujko [WSL: Ubuntu]
** File description:
** fill_array.c
*/

#include "../../include/my.h"

float get_angle(plan_t *plan, int i, int j)
{
    float xa = 1, ya = 0;
    float xb, yb;
    float na, nb;
    float angle_rad, angle_deg;
    float trigo = 0;

    xb = XB - XA;
    yb = YB - YA;
    na = sqrt(xa*xa + ya*ya);
    nb = sqrt(xb*xb + yb*yb);
    angle_rad = (xa*xb + ya*yb) / (na * nb);
    angle_deg = acos(angle_rad) * 180 / M_PI;
    if (YB < YA)
        trigo = 180 - angle_deg;
    angle_deg += (2 * trigo);
    return (angle_deg);
}