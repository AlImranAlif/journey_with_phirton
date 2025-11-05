 #include<stdio.h>
 int main(){
     int a;
     scanf("%d",&a);
     char n[10001];
     scanf("%s",n);
     int  sum=0;
     for(int i=0;i<a;i++){
        sum+= n[i]-'0';
     }
     if(sum%3==0){
        printf("Yes");
     }
     else{
        printf("No");
     }
     return 0;
 }