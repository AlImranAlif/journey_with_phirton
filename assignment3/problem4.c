#include<stdio.h>
#include<string.h>
int is_palindrome(char a[]){
    int len= strlen(a);
    for(int i=0;i<len/2;i++){
        if (a[i] != a[len - 1 - i]) {
            return 0;
        }

    }
    return 1;



}
int main(){
    char a[100001];
    scanf("%s",a);
    int v=is_palindrome(a);
    if(v==  1){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }

    return 0;
}