#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct book
{
    char title[20];
    char author[20];
    float price;
    int no_pages;
};typedef struct book B;
void read(B *b,int n)
{
     
     for(int i=0;i<n;i++)
     {
     	printf("Enter the title, author name, price and number of pages in order\n");
     	scanf("%s%s%f%d",b[i].title,b[i].author,&(b[i].price),&(b[i].no_pages));
     }	
}
void print(B *b,int n)
{
    int i;
    printf("The book details are\n");
    for(i=0;i<n;i++)
    	printf("%s\t%s\t%f\t%d\n",b[i].title,b[i].author,b[i].price,b[i].no_pages);
    if(i!=0)
	printf("entery sucessfull\n");	
}
void sort(B *b,int n){
    struct book temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(strcmp(b[i].title,b[i+1].title)<0){
                strcpy(temp.title,b[i].title);
                strcpy(b[i].title,b[i+1].title);
                strcpy(b[i+1].title,temp.title);
                strcpy(temp.author,b[i].author);
                strcpy(b[i].author,b[i+1].author);
                strcpy(b[i+1].author,temp.author);
                temp.price=b[i].price;
                b[i].price=b[i+1].price;
                b[i+1].price=temp.price;
                temp.no_pages=b[i].no_pages;
                b[i].no_pages=b[i+1].no_pages;
                b[i+1].no_pages=temp.no_pages;
                
            }
        }
    }
}
int main()
{
   B bk[10];
   int n;
   printf("enter the no of entries\n");
   scanf("%d",&n);
   read(bk,n);
   //print(bk,n);
   //update(bk,n);
   sort(bk,n);
   print(bk,n);
   return 0;       
}