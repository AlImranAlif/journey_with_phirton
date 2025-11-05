 #include<stdio.h>
 int main(){
    for(int i=1;i<=3;i++){
        for(int j=i+1;j<=i;j++){
            printf("%d",j);
        }
    }
     return 0;
 }