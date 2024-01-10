#include <stdio.h>
int main(){
int n,i;
printf("Enter the number you wanna find table of.\n");
scanf("%d",&n);
i=1;
while(i<11){
printf("%d X %d = %d\n",i,n,i*n);
i++;
}
return 0;
}

