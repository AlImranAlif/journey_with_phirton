 #include<stdio.h>
 int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=1;i<=a;i++){
       scanf("%d",&arr[i]);
    }
    for(int i=1;i<a-1;i++){
       for(int j=i+1;j<a;j++){
        if(arr[i]>arr[j]){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]= temp;


        }
    }
}
for(int i=0;i<a;i++){
    printf("%d",arr[i]);
}

     
     return 0;
 }