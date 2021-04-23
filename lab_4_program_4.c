#include <stdio.h>
void accept(int *arr,int size){
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}
int main()
{
    int arr[20],size;
    int first,last,flag=0,elem;
    printf("Enter the number of elements u want to enter\n");
    scanf("%d",&size);
    printf("Enter the elements\n");
    accept(arr,size);
    printf("Enter the element u want to search: ");
    scanf("%d",&elem);
    for(int i=0;i<size;i++){
        if(arr[i]==elem){
            flag++;
            if(flag==1){
                first=i+1;
                last=i+1;
            }
            else if(flag>1){
                last=i+1;
            }
        }
    }
    if(!flag){
        printf("element not found\n");
        return 0;
    }
    printf("Element found\n");
    printf("First : %d\nLast : %d",first,last);

    return 0;
}