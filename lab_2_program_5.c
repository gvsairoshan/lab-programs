#include <stdio.h>
void prime(int n){
    for(int i=2;i<=(n/2);i++){
        if(n%i==0){
            return;
        }
    }
    printf("%d\n",n);
}
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("prime numbers for 2 to n:\n");
    for(int i=2;i<=n;i++){
        prime(i);
    }

    return 0;
}

