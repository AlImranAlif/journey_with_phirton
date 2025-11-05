 #include<stdio.h>
 int main(){
     int a;
     scanf("%d",&a);
     int arr[a];
     for(int i=1;i<=a;i++){
        scanf("%d",&arr[i]);
     }
     int b;
     int flag=0;
     scanf("%d",&b);
     for(int i=1;i<a-1;i++){
        for(int j=i+1;j<a;j++){
           if( arr[i]+arr[j]== b){
            flag=1;
            printf("Yes\n");
          
        }
    }

     }
     if(flag==0){
        printf("No\n");
     }
     return 0;
 }