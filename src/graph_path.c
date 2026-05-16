#include "graph_path.h"
#include "string.h"
#include <stdio.h>

void make_graph_path(char _cmd[], uint8_t new_value)
{
    static uint8_t arr_persentage[X_RANGE] = {0};
    static const uint8_t arr_x[X_RANGE] = {
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
    10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
    20, 21, 22, 23, 24, 25, 26, 27, 28, 29,
    30, 31, 32, 33, 34, 35, 36, 37, 38, 39,
    40, 41, 42, 43, 44, 45, 46, 47, 48, 49,
    50, 51, 52, 53, 54, 55, 56, 57, 58, 59,
    60, 61, 62, 63, 64, 65, 66, 67, 68, 69,
    70, 71, 72, 73, 74, 75, 76, 77, 78, 79,
    80, 81, 82, 83, 84, 85, 86, 87, 88, 89,
    90, 91, 92, 93, 94, 95, 96, 97, 98, 99
    };
    
    char cmd[SIZE_CMD];
    char l_cmd[SIZE_LINE + 1];

    memmove(arr_persentage, arr_persentage + 1, X_RANGE - 1);
    arr_persentage[X_RANGE - 1] = new_value;

    memset(cmd, ' ', SIZE_CMD - 1);
    for(int i = 0; i < X_RANGE; i++)
    {
        snprintf(l_cmd, SIZE_LINE + 1, " L %u %d   ", arr_x[i], (uint8_t)(100 - arr_persentage[i]));
        strncpy(cmd + (SIZE_LINE * i), l_cmd, SIZE_LINE);
    }
    cmd[SIZE_CMD - 1] = '\000';
    strncpy(_cmd, cmd, SIZE_CMD);

    // printf("%u: %s\n", strlen(cmd), cmd);
    // printf("%s>%s\n", cmd, "done");
}