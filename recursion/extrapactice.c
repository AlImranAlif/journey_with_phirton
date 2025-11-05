#include<stdio.h>
void fun(int n){
    if(n==3){
        return 0;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("I love Recursion\n");
    }
    return 0;
}