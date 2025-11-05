#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);

    }
    int index_X;
    scanf("%d",&index_X);
    int v;
    scanf("%d",&v);
    arr[index_X]=v;
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);

    }
    for(int i=n-1;i>=0;i--){
    printf("%d ",arr[i]);}



    return 0;
}