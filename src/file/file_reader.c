/*
** EPITECH PROJECT, 2020
** my_radar
** File description:
** my script reader
*/

#include "../../include/my.h"

int file_reader(plan_t *plan, char *av)
{
    int fd;
    int rd;
    struct stat d;
    stat(av, &d);

    if (my_strcmp(av, "-w") == 0) {
        usage_script();
        return (84);
    }
    plan->buff = malloc(sizeof(char) * d.st_size + 2);
    fd = open(av, O_RDONLY);
    rd = read(fd, plan->buff, d.st_size);
    plan->buff[rd] = '\0';
    return (0);
}