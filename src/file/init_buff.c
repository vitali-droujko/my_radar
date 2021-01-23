/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** Untitled-1
*/

#include "../../include/my.h"

buff_t *init_buff(void)
{
    buff_t *buff = malloc(sizeof(buff_t));
    sfVideoMode mode = {1300, 700, 32};

    buff->pixel = malloc(sizeof(sfUint8) *(1300*700*BPP/8));
    buff->mode = mode;
    WD = sfRenderWindow_create(buff->mode, TITLE, sfResize | sfClose, NULL);
    buff->texture = sfTexture_create(1300, 700);
    buff->sprite = sfSprite_create();
    buff->map_sp = sfSprite_create();
    sfSprite_setTexture(buff->sprite, buff->texture, sfTrue);
    sfRenderWindow_setFramerateLimit(buff->window, 30);
    buff->map = sfTexture_createFromFile("asset/image/map.png", NULL);
    sfSprite_setTexture(buff->map_sp, buff->map, sfTrue);
    return (buff);
}