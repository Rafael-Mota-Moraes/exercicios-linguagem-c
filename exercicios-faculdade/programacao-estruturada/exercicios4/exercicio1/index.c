#include <stdio.h>
#include "func.h"

int main()
{
    int m1[2][2] = {
        {1, 1},
        {2, 2}};

    int m2[2][2] = {
        {3, 3},
        {4, 4}};

    int m3[2][2][2];

    func(m1, m2, m3);

    return 0;
}
