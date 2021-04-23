#include <stdio.h>

int isprime(int n){
    for(int i=2;i<(n/2);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("prime factors of the given number:\n");
    for(int i=2;i<=num;i++){
        //printf("part 1 executed");
        if(num%i==0){
            //printf("part 2 executed");
            if(isprime(i)){
                printf("%d\t",i);
            }
        }
    }

    return 0;
}