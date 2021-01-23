/*
** EPITECH PROJECT, 2020
** my_radar
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdbool.h>
#include <math.h>

typedef struct plan_s
{
    int count;
    char *buff;
    char ***disp;
    sfSprite **pl;
    sfVector2f *posa_plane;
    sfVector2f *posb_plane;
    sfVector2f *speed_plane;
    sfVector2f *tower;
    float *radius_tower;
    float *radius_plane;
    sfTime *timer;
}   plan_t;

typedef struct buff_s
{
    unsigned int x;
    unsigned int y;
    sfUint8 *pixel;
    sfVideoMode mode;
    sfRenderWindow *window;
    sfTexture *texture, *map, *avion;
    sfSprite *sprite, *map_sp, *av;
    sfEvent event;
    sfCircleShape *shape;
    float radius;
}   buff_t;

#define BPP  32
#define ERROR return (84)
#define TYPE plan->disp[i][0]
#define AX_SIZE plan->disp[i][1]
#define AY_SIZE plan->disp[i][2]
#define BX_SIZE plan->disp[i][3]
#define RADIUS plan->disp[i][3]
#define BY_SIZE plan->disp[i][4]
#define SPEED plan->disp[i][5]
#define DELAY plan->disp[i][6]
#define ENDA plan->disp[i][7]
#define ENDB plan->disp[i][4]
#define XA (float)my_getnbr(AX_SIZE)
#define YA (float)my_getnbr(AY_SIZE)
#define XB (float)my_getnbr(BX_SIZE)
#define YB (float)my_getnbr(BY_SIZE)
#define TITLE "my_radar"
#define WD buff->window
#define SEC_DIM plan->disp[prim][sec]
#define PRIM_DIM plan->disp[prim]
#define CLONE_T my_strdup(temp)

int my_compute_power_rec(int, int);
int my_find_prime_sup(int);
int my_compute_square_root(int);
int my_getnbr(char *);
int my_isneg(int);
int my_is_prime(int);
void my_putchar(char);
int my_put_nbr(int);
int my_putstr(char const *);
char *my_revstr(char *);
int my_showmem(char *, int);
int my_showstr(char *);
void my_sort_int_array(int *, int);
char *my_strcapitalize(char *);
char *my_strcat(char *, char *);
int my_strcmp(char *, char *);
char *my_strcpy(char *, char *);
int my_str_isalpha(char *);
int my_str_islower(char *);
int my_str_isnum(char *);
int my_str_isprintable(char *);
int my_str_isupper(char *);
int my_strlen(char *);
char *my_strlowcase(char *);
char *my_strncat(char *, char *, int);
int my_strncmp(char *, char *, int);
char *my_strncpy(char *, char *, int);
char *my_strstr(char *, char *);
char *my_strupcase(char *);
void my_swap(int *, int *);
char **my_str_to_word_array(char const *);
char *my_strdup(char const *);
char **premdimf(char const *);
char **secdimf(char const *);
int my_pow(int, int);

int file_reader(plan_t *plan, char *av);
void file_array(plan_t *plan);
void print_treble(char ***tbl);
void free_treble(plan_t *plan);
int deterline(plan_t *plan);
void print_treble(char ***tbl);
char ***init_array(int m, int n, int o);
buff_t *init_buff(void);
sfCircleShape *create_circle(sfVector2f position, float radius);
static void free_struct(buff_t *buff);
int create_map(plan_t *plan, buff_t *buff);
int file_checker(plan_t *plan);
int type_checker(plan_t *plan, int i);
int a_checker(plan_t *plan, int i);
int b_checker(plan_t *plan, int i);
int speed_checker(plan_t *plan, int i);
int delay_checker(plan_t *plan, int i);
int file_manager(int nb_error);
int usage_script(void);
int count_tower(plan_t *plan);
int count_plane(plan_t *plan);
void fill_tower_array(plan_t *plan);
void fill_plane_array(plan_t *plan);
sfCircleShape *create_circle(sfVector2f position, float radius);
void draw_tower(plan_t *plan, buff_t *buff);
void draw_plane(plan_t *plan, buff_t *buff);
void fill_tower_array(plan_t *plan);
void fill_plane_array(plan_t *plan);
sfVector2f get_speed(plan_t *plan, int i);
float get_angle(plan_t *plan, int i, int j);
void free_buff_t(buff_t *buff);
void free_plan_t(plan_t *plan);
int prepare_map(plan_t *plan, buff_t *buff);


#endif