/*
** EPITECH PROJECT, 2018
** 101pong_2018
** File description:
** pong
*/

#include "../include/pong.h"

int main(int ac, char **av)
{
    coord_t *coords;
    coord_t *vector;
    coord_t *point;
    float angle;
    int time;

    if (ac == 2 && !strcmp(av[1], "-h")) {
        printf("USAGE\n"
               "\t./101pong x0 y0 z0 x1 y1 z1 n\n"
               "DESCRIPTION\n"
               "\tx0\tball abscissa at time t - 1\n"
               "\ty0\tball ordinate at time t - 1\n"
               "\tz0\tball altitude at time t - 1\n"
               "\tx1\tball abscissa at time t\n"
               "\ty1\tball ordinate at time t\n"
               "\tz1\tball altitude at time t\n"
               "\tn\time shift (greater than or equal to zero, integer)\n");
    }
    else if (ac == 8) {
        coords = get_coords(av);
        vector = get_vector(coords);
        time = atoi(av[7]);
        if (time < 0)
            exit (84);
        point = get_point_at_n(vector, coords, time);
        angle = get_angle(coords, vector, time);
        display(vector, point, time, angle);
    }
}