/*
** EPITECH PROJECT, 2018
** 101pong_2018
** File description:
** pong
*/

#include "../include/pong.h"

coord_t *get_vector(coord_t *coords)
{
    coord_t *vector = malloc(sizeof(coord_t));

    vector->x = coords[1].x - coords[0].x;
    vector->y = coords[1].y - coords[0].y;
    vector->z = coords[1].z - coords[0].z;

    return (vector);
}

coord_t *get_point_at_n(coord_t *vector, coord_t *coords, int n)
{
    coord_t *point = malloc(sizeof(coord_t));

    point->x = coords[1].x + n * vector->x;
    point->y = coords[1].y + n * vector->y;
    point->z = coords[1].z + n * vector->z;

    return (point);
}

float get_angle(coord_t *coords, coord_t *vector, int n)
{
    int i = 0;
    float angle = 0.0;
    float tmp = coords[1].z + n * vector->z;
    int no = - coords[1].z / vector->z;

    while (i < n && tmp != 0.0) {
        if (tmp > 0 && coords[1].z + i * vector->z < 0)
            tmp = 0;
        else
            tmp = coords[1].z + i * vector->z;
        ++i;
    }
    if (tmp == 0.0){
        if (no < 0)
            return (0);
        else
            angle = 90 - 180 / M_PI * acos(vector->z / sqrt(pow(vector->z, 2) +
                    pow(vector->y, 2) + pow(vector->x, 2)));
    }
    return (fabs(angle));
}
