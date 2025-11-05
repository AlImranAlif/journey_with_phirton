#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int t;
        scanf("%d",&t);
        while(n !=0){
            printf("%d ",n%10);
            n/=10;
        }
    }
    printf("\n");
    return 0;
}