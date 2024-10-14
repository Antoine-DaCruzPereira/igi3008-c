#include <stdio.h>

void sumult(int *x , int *y){
    int temp = 0;
    temp = *x;
    *x = *x + *y;
    *y = temp*(*y);
}

int main(){
    int a1 = 3;
    int b1 = 4;
    int a = a1;
    int b = b1;
    sumult(&a,&b);
    printf("%d + %d = %d\n",a1,b1,a);
    printf("%d + %d = %d\n",a1,b1,b);
}