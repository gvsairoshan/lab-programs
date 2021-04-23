#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int a,b,res;
    printf("Enter the numbers\n");
    scanf("%d%d",&a,&b);
    res=add(a,b);
    printf("res is %d",res);
    return 0;
}