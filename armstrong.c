#include <stdio.h>
#include <math.h>

int isArmstrong(int number){
    int remainder,n=0, result=0, originalNum;
    originalNum = number;

    while (originalNum != 0)
    {
        originalNum/=10;
        ++n;
    }
    originalNum = number;
    
    while (originalNum != 0)
    {
        remainder = originalNum%10;
        result += pow(remainder,n);
        originalNum/10;
    }

if (result == number)
{
    return 1;
}
else
{
    return 0;
}


}


int main(void){
    int number;
    printf("Enter the number to check wether it is an armstrong number or not: ");
    scanf("%d",&number);

    if(isArmstrong(number)){
        printf("%d is a armstrong number",number);
    }else{
        printf("%d is not a armstrong number",number);
    }
    return 0;
}