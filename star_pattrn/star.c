 #include<stdio.h>
 int main(){
     int a,star=1;
     scanf("%d",&a);
     for(int o=1;o<=a;o++){
        for(int j=1;j<=star;j++){
            printf("*");
        }
        printf("\n");
        star++;

     }
     return 0;
 }