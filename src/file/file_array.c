/*
** EPITECH PROJECT, 2020
** my radar
** File description:
** put the content file in one array
*/

#include "../../include/my.h"

void file_array(plan_t *plan)
{
    plan->count = deterline(plan) + 1;
    int i = 0, prim = 0, sec = 0, ch = 0, k = 0, ex = 0;
    char *temp = malloc(sizeof(char) * 10);

    plan->disp = init_array(plan->count, 150, 150);
    for ( ; plan->buff[i] != '\0'; i++) {
        if (plan->buff[i] == ' ') {
            temp[k] = '\0', SEC_DIM = my_strdup(temp), k = 0, sec++;
        } else if (plan->buff[i] == '\n') {
            temp[k] = '\0', SEC_DIM = my_strdup(temp);
            k = 0, sec++, SEC_DIM = NULL, prim++, sec = 0;
        } else if (plan->buff[i+1] == '\0') {
            temp[k] = plan->buff[i], temp[k + 1] = '\0';
            SEC_DIM = my_strdup(temp);
            sec++, SEC_DIM = NULL, prim++, PRIM_DIM = NULL;
        } else {
            temp[k] = plan->buff[i], k++;
        }
    } free(temp);
    return;
}