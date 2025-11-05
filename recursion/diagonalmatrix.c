#include<stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[r][c]);

        }
    }
    int flag=100;
    if(r==c){
        for(int i=0;i<r;i++)
        {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {


            }
            else{
                if(a[i][j]!=0){
                    int flag=200;
                    printf("this is not");
                }
            }
        }
    }
    if(flag=100){
        printf("this is primary diagonal");

    }
    else{
        printf("this is not primary diagonal");
    }
}
    return 0;
}