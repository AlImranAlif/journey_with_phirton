#include<stdio.h>
void sort_b(int a[], int n) {
    for (int i = 0; i < n-1 ; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min_index]) {
                min_index = j;
            }
        }
        int temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }
}

int main(){
    int t;
   scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n],b[n],c[n];
        for(int i=0;i<n;i++){
            scanf("%d", &a[i]);
            b[i]=a[i];
    }
    sort_b(b,n);
    for(int i=0;i<n;i++){
        c[i]=abs(a[i]-b[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",c[i]);
    }
    printf("\n");

    
        


    }
    return 0;
}