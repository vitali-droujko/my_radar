/*
** EPITECH PROJECT, 2020
** my radar
** File description:
** file checker
*/

#include "../../../include/my.h"

static int enda_checker(plan_t *plan, int i)
{
    if (ENDA != NULL)
        return (1);
    else
        return (0);
}

static int endb_checker(plan_t *plan, int i)
{
    if (ENDB != NULL)
        return (1);
    else
        return (0);
}

int static radius_checker(plan_t *plan, int i)
{
    if (!(my_getnbr(BX_SIZE) <= 1300 && my_getnbr(BX_SIZE) >= 0))
        return (1);
    else
        return (0);
}

int file_checker(plan_t *plan)
{
    int i = 0;
    int j = 0;
    int index = 0;
    for (i = 0; plan->disp[i] != NULL; i++) {
        if (TYPE[0] == 'A') {
            index += type_checker(plan, i);
            index += a_checker(plan, i);
            index += b_checker(plan, i);
            index += speed_checker(plan, i);
            index += delay_checker(plan, i);
            index += enda_checker(plan, i);
        } else if (TYPE[0] == 'T') {
            index += type_checker(plan, i);
            index += a_checker(plan, i);
            index += radius_checker(plan, i);
            index += endb_checker(plan, i);
        } else
            index += 1;
    }
    return (index);
}