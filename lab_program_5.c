#include<stdio.h>
#include<stdlib.h>
void accept(int *a,int *b){
    printf("enter first number:\n");
    scanf("%d",a);
    printf("enter second number:\n");
    scanf("%d",b);
}
int add(int *a,int *b){
    return *a+*b;
}
void display(int *c){
    printf("%d",c[0]);
}
int main(){
    int *a,*b,*c;
    a=(int *)malloc(sizeof(int));
    b=(int *)malloc(sizeof(int));
    c=(int *)malloc(sizeof(int));
    accept(a,b);
    *c=add(a,b);
    display(c);
}