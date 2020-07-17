#include<stdio.h>

int main()
{
    int a[10],i,sum1=0,sum2=0;
    for(i=0;i<10;i++){
        a[i]=i+2;
        if(a[i]%2==0){
            sum1=sum1+a[i];
        }else{
            sum2=sum2+a[i];
        }
    }
    for(i=0;i<10;i++){
        printf("%d\t",a[i]);
    }
    printf("\nsum1= %d",sum1);
    printf("\nsum2= %d",sum2);
    return 0;
}
