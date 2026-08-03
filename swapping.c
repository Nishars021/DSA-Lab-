#include<stdio.h>
int main(){
    int a=10, b=20;
    int *p = &a;
    int *q = &b;
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
    return 0;
}