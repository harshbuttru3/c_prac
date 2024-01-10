#include <stdio.h>
int main(){
int n,digit;
printf("Enter a number");
scanf("%d",&n);
int sum = 0;
while(n>0){
digit = n % 10;
sum += digit;
n /= 10;
}
printf("%d",sum);
return 0;
}
