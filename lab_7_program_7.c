#include<stdlib.h>
#include<stdio.h>

int main()
{
    char str[1000];
    int max=0,min=10000,x;
    
    printf("Enterthe string: \n");
    
    for(;;)
    {
        scanf("%s",str);
        x= atoi(str);
        if(max<x)
            max = x;
        if(x!=0)
        {
        if(min>x)
            min=x;
        }    
        if(str[0]=='d' && str[1]=='o' && str[2]=='n' && str[3]=='e')
            break;
    
    }
    printf("The smallest number is : %d and largest is : %d ",min,max);
    return 0;
    
}