 #include<stdio.h>
 int main(){
     char s[10001];
     fgets(s,10001,stdin);
     for(int i=0;s[i]!='\\';i++){
        printf("%c",s[i]);
     }
     return 0;
 }