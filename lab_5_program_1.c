#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char *a;
    int num;
    printf("Enter the number of characters in string:");
    scanf("%d",&num);
    a=(char*)malloc(num*sizeof(char));
    printf("Enter the string\n");
    scanf("%s",a);
    printf("%s",a);
    return 0;
}