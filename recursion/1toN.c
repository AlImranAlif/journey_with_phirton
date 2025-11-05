/*#include<stdio.h>
void fun(int n){
    if(n==6){
        return ;
    }
    printf("%d\n",n);
    fun(n+1);
}
int main(){
    int n=1;
    fun(n);

    return 0;
}*/
#include <stdio.h>

void printNumbers(int n) {
    if (n == 0)
        return;
    printNumbers(n - 1); // First print from 1 to n-1
    printf("%d\n", n);   // Then print current number
}

int main() {
    int N;
    scanf("%d", &N);
    printNumbers(N);
    return 0;
}
