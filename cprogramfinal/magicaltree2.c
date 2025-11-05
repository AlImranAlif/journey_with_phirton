#include<stdio.h>
int main(){
int a,star=1;
    scanf("%d",&a);
    int lines = a + 5-(a-1)/2;
    int space=lines-1;
    for(int o=1;o<=lines;o++){
        for(int j=1;j<=space;j++){
            printf(" ");
        }

       for(int j=1;j<=star;j++){
           printf("*");
       }
       printf("\n");
       star+=2;
       space--;
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf(" ");
        }
        for(int k=0;k<a;k++){
            printf("*");
        }
        printf("\n");
    }
           return 0;
}
           /*
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    int lines = a + 5-(a-1)/2;
    int star = 1;
    int space = lines - 1;

    for (int o = 1; o <= lines; o++) {
        for (int j = 1; j <= space; j++) {
            printf(" ");
        }

        for (int j = 1; j <= star; j++) {
            printf("*");
        }

        printf("\n");
        star += 2;
        space--;
    }

    return 0;
}*/
