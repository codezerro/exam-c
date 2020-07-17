#include<stdio.h>
#include<string.h>
#include <stdbool.h>

struct Telephone{
    char t_name[20];
    int tele_number;
    int zip_code;
};

int main()
{
    int i,tele,value,index;
    char name[20];
    bool flag=false;

    struct Telephone T[5];
    ///user input
    printf("Inter User Details Name , Tele Number, Zip Code\n");
    for(i=0;i<5;i++){
        printf("Enter User %d Details\n",i+1);
        printf("Enter User Name : ");
        scanf("%s",&T[i].t_name);
        printf("Enter Tele Number : ");
        scanf("%d",&T[i].tele_number);
        printf("Enter Zip Code : ");
        scanf("%d",&T[i].zip_code);
        printf("\n");
    }

    ///code start
    printf("Enter 1 for name or 2 for telephone search\n");
    scanf("%d",&value);
    if(value==1){
        ///search by name
        printf("Enter Name for search : ");
        scanf("%s",name);
        for(i=0;i<5;i++){
            if(strcmp(T[i].t_name,name)==0){
                flag=true;
                index=i;
                break;
            }else{
                flag=false;
            }
        }
        if(flag){
            printf("Name : %s\t",T[index].t_name);
            printf("Telephone Number : %d\t",T[index].tele_number);
            printf("Zip Code : %d\n",T[index].zip_code);
        }else{
            printf("Not Matched\n");
        }
    }else if(value==2){
        ///searched phone number
        printf("Enter Telephone Number for search : ");
        scanf("%d",&tele);
        for(i=0;i<5;i++){
            if(T[i].tele_number==tele){
                flag=true;
                index=i;
                break;
            }else{
                flag=false;
            }
        }
        if(flag){
            printf("Name : %s\t",T[index].t_name);
            printf("Telephone Number : %d\t",T[index].tele_number);
            printf("Zip Code : %d\n",T[index].zip_code);
        }else{
            printf("Not Matched\n");
        }
    }else{
        printf("Enter value 1/2\n");
    }



    return 0;
}
