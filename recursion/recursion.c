#include <stdio.h>

void b(int n) {
    if (n == 0) {
        return;
    }
    b(n / 10); 
    int a = n % 10;
    printf("%d ", a);
    
}

int main() {
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
    int n;
    scanf("%d", &n);
    if (n == 0) {
        printf("0");
    } else {
        b(n);
    }
    printf("\n");
}
    return 0;
}
