#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("factors of the given number:\n");
    for(int i=1;i<=(num/2);i++){
        if(num%i==0){
            printf("%d\t",i);
        }
    }
    printf("%d",num);

    return 0;
}