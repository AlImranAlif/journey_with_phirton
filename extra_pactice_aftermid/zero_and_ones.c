 #include<stdio.h>
 int main(){
     int a;
     scanf("%d",&a);
     int z=0, o=0;
     int num;
     for(int i=1;i<=a;i++){
        scanf("%d",&num);
        if(num==0){
        z++;
     }
     else{
        o++;
     }
    }
    printf("%d %d\n", z, o);

     return 0;
 }