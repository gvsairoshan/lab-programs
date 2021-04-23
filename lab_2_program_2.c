#include <stdio.h>
void push(int a,int *s,int *top){
    s[++(*top)]=a;
}
int main()
{
    int num,n,top=-1;
    int s[10];
    printf("Enter the number\n");
    scanf("%d",&num);
    n=num;
    while(n!=0){
        push(n%10,s,&top);
        n/=10;
    }
    while(top!=-1){
        printf("%d\n",s[top--]);
        
    }
    

    return 0;
}