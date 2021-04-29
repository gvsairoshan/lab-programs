#include <stdio.h>
struct book{
    int id;
    char title[20];
    char author[20];
    int price;
};
int main()
{
    struct book a[3];
    int avg=0,i;
    printf("Enter the details about 3 books\n");
    for(i=0;i<3;i++){
        printf("Enter id: ");
        scanf("%d",&a[i].id);
        printf("Enter title: ");
        scanf("%s",a[i].title);
        printf("Enter author: ");
        scanf("%s",a[i].author);
        printf("Enter price: ");
        scanf("%d",&a[i].price);
    }
    for(i=0;i<3;i++){
        avg+=a[i].price;
    }
    avg/=3;
    printf("avg price=%d",avg);

    return 0;
}