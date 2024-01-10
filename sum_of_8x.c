#include <stdio.h>
int main(){
int i,sum;
i=1;
sum=0;
while(i<11){
sum += i*8;
i++;
}
printf("The sum of numbers occuring in the multiplication table of 8 is %d\n", sum);
return 0;
}
