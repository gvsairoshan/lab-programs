#include <stdio.h>

int main()
{
    int num,n;
    printf("Enter the number\n");
    scanf("%d",&num);
    n=num;
    while(n!=0){
        printf("%d\n",n%10);
        n/=10;
    }

    return 0;
}
