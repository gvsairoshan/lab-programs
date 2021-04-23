#include <stdio.h>

int main()
{
    int num,n;
    printf("Enter the number\n");
    scanf("%d",&num);
    n=num;
    printf("Even Digits:\n");
    while(n!=0){
        if(!((n%10)%2)){
            printf("%d\n",n%10);
            n/=10;
        }
        else{
            n/=10;
        }
    }
    printf("Odd numbers:\n");
    n=num;
    while(n!=0){
        if((n%10)%2){
            printf("%d\n",n%10);
            n/=10;
        }
        else{
            n/=10;
        }
    }

    return 0;
}