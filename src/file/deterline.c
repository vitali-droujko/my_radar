/*
** EPITECH PROJECT, 2020
** Github [WSL: Ubuntu] - my_radar
** File description:
** deterline
*/

#include "../../include/my.h"

int deterline(plan_t *plan)
{
    int count = 0;
    int i = 0;
    while (plan->buff[i] != '\0') {
        if (plan->buff[i] == '\n')
            count++;
        i++;
    }
    return (count + 1);
}