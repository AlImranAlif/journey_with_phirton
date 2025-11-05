#include<stdio.h>
int main(){
      int r,c;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d ",&a[i][j]);
        }
    }
    if(r!=c){
        printf("No");

    }
    if(r==c){
        //int element=0;
        int flag=1;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j || (i+j==r-1))
            {
                if(a[i][j]!=0)
                {
                    flag = 0;
                    break;
                }
            } 
            else
            {
                if(a[i][j]!=0)
                {
                    flag=0;
                    break;
                }
            }
          
        }
        if(flag==0)
        {
            break;
        }
       
        

    }
    if(flag==1) 
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    }
    return 0;
}