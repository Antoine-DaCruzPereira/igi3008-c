// tab3.c

#include <stdio.h>

#define SIZE 20

int main()
{

    // Déclaration

    int x[100];
    // int* p = x;

    // Initialisation

    x[0] = 1;
    x[1] = 1;
    for (int i = 2; i < SIZE; i++)
        x[i] = x[i - 1] + x[i - 2];
}