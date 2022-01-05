#include<stdlib.h>
#include<stdio.h>
typedef struct{
    int d, m, a;
}Data;

int main(){

    Data data;
    Data *p;
    p = &data;

    data.d = 25;
    data.m = 9;
    data.a = 2000;

    printf("%d/%d/%d\n", data.d, data.m, data.a);

    return 0;
}
