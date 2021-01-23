/*
** EPITECH PROJECT, 2020
** Github [WSL: Ubuntu] - my_radar
** File description:
** Game_loop
*/

#include "../../include/my.h"

int prepare_map(plan_t *plan, buff_t *buff)
{
    if (!buff->map)
        return 84;
    fill_tower_array(plan);
    fill_plane_array(plan);
    if (!(buff->window && buff->texture))
        return (84);
    return (0);
}