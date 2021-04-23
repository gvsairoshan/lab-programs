#include <stdio.h>
#include <math.h>
int dec_to_bin(int dec){
    int bin=0,flag=1,rem;
    for(int i=0;dec!=0;i++){
        rem=dec%2;
        bin+=flag*rem;
        dec/=2;
        flag*=10;
    }
    return bin;
}
int main()
{
    int bin,dec;
    printf("Enter the number in binary: ");
    scanf("%d",&dec);
    bin=dec_to_bin(dec);
    printf("bin number of %d is %d",dec,bin);
    
    

    return 0;
}