/*
** EPITECH PROJECT, 2020
** B-MUL-100-NCE-1-1-myradar-vitali.droujko [WSL: Ubuntu]
** File description:
** draw_tower.c
*/

#include "../include/my.h"

sfCircleShape *create_circle(sfVector2f position, float radius)
{
    sfCircleShape *shape;
    shape = sfCircleShape_create();
    sfCircleShape_setRadius(shape, radius);
    sfCircleShape_setFillColor(shape, sfTransparent);
    sfCircleShape_setOutlineThickness(shape, 2);

    sfCircleShape_setPosition(shape, position);
    return shape;
}

void draw_tower(plan_t *plan, buff_t *buff)
{
    int k = count_tower(plan);
    sfTexture *tower;
    sfSprite *sprite;
    sfCircleShape *shape;
    sfVector2f a = {0, 0};
    tower = sfTexture_createFromFile("asset/image/tower.png", NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, tower, sfTrue);
    int i = 0;
    while (i < k) {
        sfSprite_setTexture(sprite, tower, sfTrue);
        sfSprite_setPosition(sprite, plan->tower[i]);
        a.x = plan->tower[i].x + 24 - plan->radius_tower[i];
        a.y = plan->tower[i].y + 24 - plan->radius_tower[i];
        shape = create_circle(a, plan->radius_tower[i]);
        sfRenderWindow_drawSprite(buff->window, sprite, NULL);
        sfRenderWindow_drawCircleShape(buff->window, shape, NULL);
        i++;
    }
    return;
}