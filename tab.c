//tab.c
#include <stdio.h>
#include <stdlib.h>


int main0()
{
    int x[10] ;

    // ABSENCE d'INITIALISATION

    for ( int i = 0; i < 10; i++ ){
        printf("%d\n", x[i]);
    }

    return 0;
}



int main()
{
    int min = 0;
    int max = 0;
    int imin = 0;
    int imax = 0;
    int sum = 0;
    double moy = 0;
    int count = 0;

    int t[100];
    int size = 10;
    for(int i=0; i <= size; i++)
    {
        int add = rand() % 50;
        printf(add);
        t[i] = add;
    }
    

    return 0;
}

void mini(int t[], int size, int *min)
{
    for (int i = 0; i < size; i++) {
        if (t[i] < *min) {
            *min = t[i];
        }
    }
}

void imini(int t[], int size, int *imin)
{
    for (int i = 0; i < size; i++) 
    {
        if (t[i] < t[*imin]) {
            *imin = i;
        }
    }
}

void maxi(int t[], int size, int *max)
{
    for (int i = 0; i < size; i++) {
        if (t[i] > *max) {
            *max = t[i];
        }
    }
}

void imaxi(int t[], int size, int *imax)
{
    for (int i = 0; i < size; i++) {
        if (t[i] > t[*imax]) {
            *imax = i;
        }
    }
}

void somme(int t[], int size, int *sum)
{
    for (int i = 0; i < size; i++) {
    sum += t[i];
    }
}

void moyenne(int t[], int size, double *moy) 
{
    int sum = 0;
    for (int i = 0; i < size; i++) {
    sum += t[i];
    }
    *moy = sum / size;
}

void compte(int t[], int size, int lowest, int highest, int *count)
{
    
}