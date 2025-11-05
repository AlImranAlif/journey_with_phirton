 #include<stdio.h>
 #include<string.h>
 int main(){
     char a[101],tempa[101];
     scanf("%s",&a);
     int length=strlen(a);
     strcpy(tempa, a); 
    int len = strlen(tempa);
     char temp= tempa[0];
     tempa[0]=tempa[length-1];
     tempa[length-1]=temp;
     if(strcmp(a,tempa)==0){
        printf("Yes");
     }
     else{
        printf("No");
     }
     return 0;
 }