#include <stdio.h>
int big(int *a,int n){
    int max=a[0];
    for(int i=1;i<7;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int main()
{
    int a[10],n;
    int i;
    int large;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    large=big(a,n);
    printf("Largest value is %d\n",large);
    printf("Elements before %d\n",large);
    for(i=0;a[i]!=large;i++){
        printf("%d\t",a[i]);
    }
    printf("\nelements after %d\n",large);
    i++;
    for(;i<7;i++){
        printf("%d\t",a[i]);
    }

    return 0;
}