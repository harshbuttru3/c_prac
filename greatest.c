#include <stdio.h>
int main(){
int a,b,c,d;
printf("Enter the numbers:");
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a>b && b>c && c>d){
printf("The greatest integer is %d", a);}
else if(b>a && a>c && c>d){
printf("The greatest integer is %d", b);}
else if(c>d && c>a && c> b){
printf("The greatest integer is %d", c);}
else{
printf("The greatest integer is %d", d);}

return 0;
}
