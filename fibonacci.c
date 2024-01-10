#include <stdio.h>

//with simple logic.
// int main(void){
//     int n,first=0,second=1,i,next;

//     printf("Enter the number till which wanna find fibonacci series: ");
//     scanf("%d",&n);

//     for(i=0;i<n;i++){
//         if(i<=1){
//             next = i;
//         }else{
//             next = first + second;
//             first = second;
//             second = next;
//         }
//         printf("%d ",next);
//     }
// }



//By Recursive method.
int fib(int n){
    if(n<=1){
        return n;
    }else{
        return fib(n-1)+fib(n-2);
    }
}

int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(int i = 0;i<n; i++){
        printf("%d ",fib(i));
    }
}