#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a,*b,*c;
    a=(int *)malloc(sizeof(int));
    b=(int *)malloc(sizeof(int));
    c=(int *)malloc(sizeof(int));
    printf("Enter first number");
    scanf("%d",a);
    printf("enter second number:\n");
    scanf("%d",b);
    *c=(*a)+(*b);
    printf("result: %d",*c);
    return 0;
}