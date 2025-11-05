#include <stdio.h>

int main() {
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    if ((a + b) * c == d || (a + b) - c == d || (a - b) * c == d || 
        (a - b) + c == d || (a * b) + c == d || (a * b) - c == d  ){
        printf("YES");}

        if (a + (b * c) == d || a + (b - c) == d || a - (b * c) == d || 
        a - (b - c) == d || a * (b + c) == d || a * (b - c) == d) {
        printf("YES\n");
        return 0;
    }
    
    
    if ((b + c) * a == d || (b + c) - a == d || (b - c) * a == d || 
        (b - c) + a == d || (b * c) + a == d || (b * c) - a == d) {
        printf("YES\n");
        return 0;
    }
    
    
    if (b + (c * a) == d || b + (c - a) == d || b - (c * a) == d || 
        b - (c - a) == d || b * (c + a) == d || b * (c - a) == d) {
        printf("YES\n");
        return 0;
    }
    
    
    if ((c + a) * b == d || (c + a) - b == d || (c - a) * b == d || 
        (c - a) + b == d || (c * a) + b == d || (c * a) - b == d) {
        printf("YES\n");
        return 0;
    }
    
   
    if (c + (a * b) == d || c + (a - b) == d || c - (a * b) == d || 
        c - (a - b) == d || c * (a + b) == d || c * (a - b) == d) {
        printf("YES\n");
        return 0;
    }
    
        return 0;
    }

