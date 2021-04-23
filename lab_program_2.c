#include<stdio.h>
void accept(int *a,int *b){
    printf("enter first number:\n");
    scanf("%d",a);
    printf("enter second number:\n");
    scanf("%d",b);
}
int add(int a,int b){
    return a+b;
}
void display(int c){
    printf("result: %d",c);
}
int main(){
    int a,b,res;
    accept(&a,&b);
    res=add(a,b);
    display(res);
}