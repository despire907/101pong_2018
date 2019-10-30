/*
** EPITECH PROJECT, 2018
** 101pong_2018
** File description:
** utils
*/

#include "../include/pong.h"

coord_t *get_coords(char **av)
{
    coord_t *coords = malloc(sizeof(coord_t) * 2);
    coords[0].x = strtof(av[1], 0);
    coords[0].y = strtof(av[2], 0);
    coords[0].z = strtof(av[3], 0);
    coords[1].x = strtof(av[4], 0);
    coords[1].y = strtof(av[5], 0);
    coords[1].z = strtof(av[6], 0);

    return coords;
}

void show_coords(coord_t *coords)
{
    printf("Xt-1 : %f :: %f :: %f\n", coords[0].x, coords[0].y, coords[0].z);
    printf("Xt : %f :: %f :: %f\n", coords[1].x, coords[1].y, coords[1].z);
}

void display(coord_t *vector, coord_t *point, int t, float angle)
{
    printf("The velocity vector of the ball is:\n(%.2f, %.2f, %.2f)\n",
            vector->x, vector->y, vector->z);
    printf("At time t + %i, ball coordinates will be:\n(%.2f, %.2f, %.2f)\n",
            t, point->x, point->y, point->z);
    if (angle != 0.0)
        printf("The incidence angle is:\n%.2f degrees\n", angle);
    else
        printf("The ball won’t reach the bat.\n");
}