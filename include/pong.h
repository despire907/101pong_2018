/*
** EPITECH PROJECT, 2018
** 101pong_2018
** File description:
** pong
*/

#ifndef PONG_H_
    #define PONG_H_
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct coord {
    float x;
    float y;
    float z;
} coord_t;

float get_angle(coord_t *coords, coord_t *vector, int n);
coord_t *get_coords(char **av);
void show_coords(coord_t *coords);
void display(coord_t *vector, coord_t *point, int t, float angle);
coord_t *get_vector(coord_t *coords);
coord_t *get_point_at_n(coord_t *vector, coord_t *coords, int n);
#endif /* !PONG_H_ */
