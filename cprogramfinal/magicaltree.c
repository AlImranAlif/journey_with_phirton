#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  
    if(n%2 !=0){
    if(n==1){
    for (int i = 1; i <= n+5; i++) {
        for (int j = 1; j <= (n+5) - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < 5; i++) {
        for (int o = 0; o < ((2*(n+5)-1)-n)/2; o++) {
            printf(" ");
        }

        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
}
  if(n==3){
    for (int i = 1; i <= n+4; i++) {
        for (int j = 1; j <= (n+4) - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < 5; i++) {
        for (int o = 0; o < ((2*(n+4)-1)-n)/2; o++) {
            printf(" ");
        }

        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
}
  if(n==5){
    for (int i = 1; i <= n+3; i++) {
        for (int j = 1; j <= (n+3) - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < 5; i++) {
        for (int o = 0; o < ((2*(n+3)-1)-n)/2; o++) {
            printf(" ");
        }

        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
}
    }
    
    return 0;
}
