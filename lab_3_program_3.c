#include <stdio.h>
int sos(int num){
    int sum=0;
    while(num!=0){
        sum+=(num%10)*(num%10);
        num/=10;
    }
    return sum;
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    while(num!=1 && num!=4){
        num=sos(num);
    }
    if(num==1){
        printf("the number is a happy number\n");
    }
    else{
        printf("the number is not a happy number");
    }

    return 0;
}