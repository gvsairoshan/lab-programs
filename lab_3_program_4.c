#include <stdio.h>
int ispronic(int n){
    for(int i=0;i<(n/2);i++){
        if(n==i*(i+1))
            return 1;
    }
    return 0;
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    ispronic(num)?printf("it is a pronic number\n"):printf("it is not a pronic number\n");

    return 0;
}