#include <stdio.h>
int main(){
int a,fac;
printf("The the number.\n");
scanf("%d",&a);
fac = 1;
for(int i=a; i>0; i--){
fac *= i;
}
printf("The factorial of %d is %d\n",a,fac);
return 0;
}
