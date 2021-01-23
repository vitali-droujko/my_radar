/*
** EPITECH PROJECT, 2020
** my_radar
** File description:
** usage
*/

#include "../../../include/my.h"

int usage_script(void)
{
    write(1, "Each line must contain :\n", 26);
    write(1, "if [TYPE] = 'A'\n", 22);
    write(1, "[STARTING COORD X]  0 < (int)x < 1300\n", 39);
    write(1, "[STARTING COORD Y]  0 < (int)x < 700\n", 38);
    write(1, "[END COORD X]  0 < (int)x < 1300\n", 34);
    write(1, "[END COORD Y]  0 < (int)x < 700\n", 33);
    write(1, "[SPEED]  0 < (int)x\n", 21);
    write(1, "[DELAY]  0 < (int)x\n\n", 22);
    write(1, "if [TYPE] = 'T'\n", 17);
    write(1, "[STARTING COORD X]  0 < (int)x < 1300\n", 39);
    write(1, "[STARTING COORD Y]  0 < (int)x < 700\n", 38);
    write(1, "[RADIUS r]  0 < x < 100\n\n", 26);
    write(1, "Exemple :\n", 11);
    write(1, "A 50 156 785 235 1 0\n", 22);
    write(1, "A 17 120 1120 23 5 1\n", 22);
    write(1, "T 350 12 15\n", 13), write(1, "[...]\n", 7);
    write(1, "A 270 500 785 48 7 1\n\n", 23), write(1, "LOOK OUT !\n", 12);
    write(1, "each entity must be separated by only one space\n", 49);
    write(1, "each end of line must contain one line break\n", 46);
    return (0);
}