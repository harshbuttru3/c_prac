#include <stdio.h>
int main(){
float salary;
printf("Enter your Salary Amount in Lakhs per anum\n");
scanf("%f",&salary);
if(salary<2.5){
printf("No tax\n");}
else if(salary<5.0){
printf("Your tax amount is %f\n", salary *0.05*100000);}
else if(salary < 10.0){
printf("Your tax amount is %f\n", salary * 0.2*100000);}
else {
printf("Your tax amount is %f\n", salary * 0.3*100000);}

return 0;
}
