 #include<stdio.h>
 int main(){
     int n;
     scanf("%d",&n);
     int arr[n];
     for(int i;i<=n;i++){
        scanf("%d",&arr[i]);
     }
     int i=0;
     int j=n-1;
     if(i==j){
        printf("Yes");
     }
     else
     {
        printf("No");
     }

     return 0;
 }