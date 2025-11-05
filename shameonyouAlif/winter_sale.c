 #include<stdio.h>

 int main(){
     int x,n;
     scanf("%d%d",&x,&n);
     float original_price=(n*100)/(100-x);
     printf("%.2f",original_price);
     
     return 0;
 }