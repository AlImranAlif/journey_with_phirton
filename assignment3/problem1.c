 #include<stdio.h>
 int main(){
    int a;
    scanf("%d",&a);
    int has=1,minus=1,space=a-1;
    if(a%2!=0){
        for(int i=0;i<a;i++){
        for(int j=0;j<space;j++){
        
            printf(" ");
        }
        for(int k=0;k<has;k++){
            printf("#");
        }
    
    printf("\n");
    has+=4;
    space--;
}
   for(int i=0;i<a;i++){
        for(int j=0;j<space;j++){
        
            printf(" ");
        }
        for(int k=0;k<minus;k++){
            printf("-");
        }
        for(int o=0;o<minus;o++){
            printf("-");
        }
    
    printf("\n");
    has+=4;
    minus+=4;

    space--;
    }
}
/*else if(a%2==0){
     for(int i=0;i<a;i++){
        for(int j=0;j<space;j++){
        
            printf(" ");
        }
        for(int k=0;k<has;k++){
            printf("#");
        }
    
    printf("\n");
    has+=4;
    space--;
}
   for(int i=0;i<a;i++){
        for(int j=0;j<space;j++){
        
            printf(" ");
        }
        for(int k=0;k<minus;k++){
            printf("-");
        }
    
    printf("\n");
    minus+=4;
    space--;
    }

}
*/
     
     return 0;
 }