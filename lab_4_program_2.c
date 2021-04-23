#include <stdio.h>
void read_arr(int *,int);
void print_arr(int *,int);
void print_odd(int *,int);
int main()
{
    // array declaration 
    int arr[10],arr_size;
    printf("Enter the number of elements\n");
    scanf("%d",&arr_size);
    read_arr(arr,arr_size);
    printf("The array elements are \n");
    print_arr(arr,arr_size);
    printf("The  odd elements are\n");
    print_odd(arr,arr_size);
    return 0;
}
void read_arr(int *arr,int size){
    printf("Enter the array elements\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}
void print_arr(int *arr,int size){
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void print_odd(int *arr,int size){
    for(int i=0;i<size;i++){
        if(arr[i]%2){
            printf("%d\t",arr[i]);
        }
    }
}