#include <stdio.h>
int main(){
int phy,chem,maths;
printf("Enter the marks obtained in physics\n");
scanf("%d",&phy);
printf("Enter the marks obtained in chemistry\n");
scanf("%d",&chem);
printf("Enter the marks obtained in maths\n");
scanf("%d",&maths);

int totalPercent = (phy+chem+maths)/3;
if(phy < 33 || chem < 33 || maths < 33 || totalPercent < 40){
printf("You failed :(\n");
}else{
printf("Yeah! you passed in all subjects.\n");
}
return 0;
}
