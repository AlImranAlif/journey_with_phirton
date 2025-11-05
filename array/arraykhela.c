#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=4;i++){
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(int i=1;i<=4;i++){
        sum += a[i];
    }
    printf("%d ",abs(sum));

    return 0;
}