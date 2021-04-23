#include<stdio.h>
struct num{
    int a;
    int b;
} n;
int main(){
    int sum;
    printf("Enter the numbers:\n");
    scanf("%d%d",&(n.a),&(n.b));
    sum=n.a+n.b;
    printf("result:%d",sum);
    return 0;
}