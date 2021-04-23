#include<stdio.h>
struct num{
    int a;
    int b;
    int sum;
};
typedef struct num N;
int accept(N *n){
    printf("enter the numbers\n");
    scanf("%d%d",&(n->a),&(n->b));
}
int add(N *n){
    n->sum=n->a+n->b;
}
void display(N n){
    printf("result: %d",n.sum);
}
int main(){
    struct num n;
    accept(&n);
    add(&n);
    display(n);
}