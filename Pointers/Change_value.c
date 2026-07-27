#include <stdio.h>
int main(){
    int a = 10;
    int *p = &a;
    printf ("%d\n",*p);
    *p = 50;
    printf ("%d\n",a);
    return 0; 
}