#include<stdio.h>
void swap(int a, int b){
    int c = a;
    a = b;
    b = c;
}

void betterswap(int *p, int *q){
    int c = *p;
    *p = *q;
    *q = c;
}

int main(){
    int a = 20, b = 10;
    printf("Before swap :- a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("After swap :- a = %d, b = %d\n", a, b);
    printf("Before better swap :- a = %d, b = %d\n", a, b);
    betterswap(&a, &b);
    printf("After better swap :- a = %d, b = %d\n", a, b);
}