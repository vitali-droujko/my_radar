/*
** EPITECH PROJECT, 2020
** my radar
** File description:
** file checker
*/

#include "../../../include/my.h"

int type_checker(plan_t *plan, int i)
{
    if (!(TYPE[0] == 'A' || TYPE[0] == 'T' && my_strlen(TYPE) == 1 ))
        return (1);
    else
        return (0);
}

int a_checker(plan_t *plan, int i)
{
    if (!(my_getnbr(AX_SIZE) <= 1300 && my_getnbr(AX_SIZE) >= 0))
        return (1);
    if (!(my_getnbr(AY_SIZE) <= 1300 && my_getnbr(AY_SIZE) >= 0))
        return (1);
    else
        return (0);
}

int b_checker(plan_t *plan, int i)
{
    if (!(my_getnbr(BX_SIZE) <= 1300 && my_getnbr(BX_SIZE) >= 0))
        return (1);
    if (!(my_getnbr(BY_SIZE) <= 1300 && my_getnbr(BY_SIZE) >= 0))
        return (1);
    else
        return (0);
}

int speed_checker(plan_t *plan, int i)
{
    if (my_getnbr(SPEED) <= 0)
        return (1);
    else
        return (0);
}

int delay_checker(plan_t *plan, int i)
{
    if (my_getnbr(DELAY) < 0)
        return (1);
    else
        return (0);
}