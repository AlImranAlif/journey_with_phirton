 #include<stdio.h>
 int main(){
     int a;
     scanf("%d",&a);
     int space=a-1;
     for(int o=1;o<=a;o++){
        for(int j=1;j<=space;j++){
            printf(" ");
        }

       for(int j=o;j>=1;j--){
           printf("%d",j);
       }
       printf("\n");
       space--;
      
    }
     return 0;
 }