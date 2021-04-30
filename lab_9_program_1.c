#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5
void push(int S[MAX_SIZE],int *top)
{
    int ele;
    printf("enter the elem to insert\n");
    scanf("%d",&ele);
    if(*top< MAX_SIZE-1)
    {
        //insert is
        (*top)++;
        S[*top]=ele;
    }
    else
        printf("stack over flow\n");
}
void display(int S[MAX_SIZE],int top)
{
    int i;
    if(top == -1)
        printf("underflow condition");
    else
    {
        printf("element of stack\n");
        for(i=0;i<=top;i++)
            printf("%d\n",S[i]);
    }
}
void pop(int S[MAX_SIZE],int *top)
{
    int ele;
    if(*top==-1)
        printf("under flow condition");
    else
    {
        ele=S[*top];
        (*top)--;
        printf("element poped is %d\n",ele);
    }
}
int main()
{
    int S[MAX_SIZE],top=-1,ch;

    while(1)
    {
        printf("1.push\n2.pop\n3.display\n4.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:  push(S,&top);
                     display(S,top);
                     break;
            case 2:  pop(S,&top);
                     display(S,top);
                     break;
            case 3:  display(S,top);
                     break;
            default: return 0;
        }
    }
}