#include <stdio.h>
void prime(int n){
    for(int i=2;i<=(n/2);i++){
        if(n%i==0){
            printf("Given number is not a prime number\n");
            return;
        }
    }
    printf("Given number is a prime number\n");
}
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    prime(num);
    return 0;
}