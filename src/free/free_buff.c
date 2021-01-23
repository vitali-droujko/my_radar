/*
** EPITECH PROJECT, 2020
** Github [WSL: Ubuntu] - my_radar
** File description:
** Game_loop
*/

#include "../../include/my.h"

void free_buff_t(buff_t *buff)
{
    free(buff->pixel);
    free(buff);
    return;
}
