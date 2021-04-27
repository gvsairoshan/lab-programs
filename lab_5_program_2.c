#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* alloc(int num){
    char *temp;
    temp=(char *)malloc(num*sizeof(char));
    if(temp==NULL){
        printf("Memory not allocated.\n");
        exit(0);
    }
    return temp;
}
void input(char *a){
    printf("Enter the string\n");
    scanf("%s",a);
}
void display(char *a){
    printf("%s",a);
}
int main(){
    char *a;
    int num;
    printf("Enter the number of characters in string:");
    scanf("%d",&num);
    a=alloc(num);
    input(a);
    display(a);
    return 0;
}