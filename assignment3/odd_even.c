 #include<stdio.h>
 void odd_even(){
    int a;
    scanf("%d",&a);
    int arr[10001];
    int even=0,odd=0;
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
      printf("%d %d\n", even, odd);
 }
 int main(){

     odd_even();
     return 0;
 }