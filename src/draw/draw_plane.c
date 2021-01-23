/*
** EPITECH PROJECT, 2020
** B-MUL-100-NCE-1-1-myradar-vitali.droujko [WSL: Ubuntu]
** File description:
** draw_plane.c
*/

#include "../include/my.h"

void draw_plane(plan_t *plan, buff_t *buff)
{
    int k = count_plane(plan);
    sfTexture *plane;
    sfSprite *sprite;
    int i = 0;
    while (i < k) {
        plane = sfTexture_createFromFile("asset/image/plane.png", NULL);
        sprite = sfSprite_create();
        sfSprite_setTexture(sprite, plane, sfTrue);
        sfSprite_setRotation(sprite, plan->radius_plane[i]);
        sfSprite_setPosition(sprite, plan->posa_plane[i]);
        plan->posa_plane[i].x += plan->speed_plane[i].x;
        plan->posa_plane[i].y += plan->speed_plane[i].y;
        sfRenderWindow_drawSprite(buff->window, sprite, NULL);
        i++;
    }
    return;
}
