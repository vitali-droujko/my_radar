/*
** EPITECH PROJECT, 2020
** my_radar
** File description:
** main
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    plan_t *plan;
    buff_t *buff;
    plan = malloc(sizeof(plan_t));

    if (file_reader(plan, av[1]) != 0)
        return 84;
    file_array(plan);
    if (file_manager(file_checker(plan)) != 0)
        return (84);
    buff = init_buff();
    create_map(plan, buff);

    return (0);
}