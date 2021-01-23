/*
** EPITECH PROJECT, 2020
** Github [WSL: Ubuntu] - my_radar
** File description:
** Game_loop
*/

#include "../../include/my.h"

int create_map(plan_t *plan, buff_t *buff)
{
    if (prepare_map(plan, buff) == 84)
        return (84);
    while (sfRenderWindow_isOpen(buff->window))
    {
        while (sfRenderWindow_pollEvent(buff->window, &buff->event))
            if (buff->event.type == sfEvtClosed)
                sfRenderWindow_close(buff->window);
        sfRenderWindow_drawSprite(buff->window, buff->map_sp, NULL);
        sfTexture_updateFromPixels(buff->texture, buff->pixel, 1300, 700, 0, 0);
        draw_tower(plan, buff);
        draw_plane(plan, buff);
        sfRenderWindow_drawSprite(buff->window, buff->sprite, NULL);
        sfRenderWindow_display(buff->window);
        sfRenderWindow_clear(buff->window, sfBlack);
    }
    sfRenderWindow_destroy(buff->window);
    sfSprite_destroy(buff->sprite);
    sfTexture_destroy(buff->texture);
    return (0);
}