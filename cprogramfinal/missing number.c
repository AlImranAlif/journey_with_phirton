#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int m;
        int a,b,c;
        scanf("%lld %d %d %d",&m,&a,&b,&c);
        long long int temp= a*b*c;
        if(a==0||b==0||c==0){
           printf("0\n");
        }
        else{
            if(m%temp!=0){
                printf("-1\n");
            }
            else{
                printf("%lld\n",m/temp);
            }
        }
    }
    return 0;
}