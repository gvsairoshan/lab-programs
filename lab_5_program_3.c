#include<stdio.h>
int main(){
    char a[20];
    printf("Enter the string\n");
    gets(a);
    //scanf("%[^\n]",a);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==' ')
            printf("\n");
        else
            printf("%c",a[i]);
    }
    return 0;
}