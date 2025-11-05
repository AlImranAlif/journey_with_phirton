#include<stdio.h>
int main(){
    int n;
    int sum_pos=0, sum_neg=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int v;
        scanf("%d",&v);
        if(v>0){
            sum_pos+=v;
        }
        else if(v<0){
            sum_neg+=v;

        }
    }
    printf("%d ",sum_pos);
    printf("%d ",sum_neg);

    return 0;
}