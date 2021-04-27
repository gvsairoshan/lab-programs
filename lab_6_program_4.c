#include <stdio.h>
#include <string.h>
int main()
{
    char a[20],b[20];
    printf("enter the string\n");
    scanf("%s",a);
    for(int i=0;i<strlen(a);i++){
        b[i]=a[i];
    }
    printf("copied string is %s",b);

    return 0;
}