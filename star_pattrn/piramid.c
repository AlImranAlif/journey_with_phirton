#include<stdio.h>
int main(){
    int a,star=1;
    scanf("%d",&a);
    int space=a-1;
    for(int o=1;o<=a;o++){
        for(int j=1;j<=space;j++){
            printf(" ");
        }

       for(int j=1;j<=star;j++){
           printf("*");
       }
       printf("\n");
       star+=2;
       space--;

    }
    return 0;
}