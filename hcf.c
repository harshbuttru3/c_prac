#include <stdio.h>
int main(void){
    int m,n, result=1;
    printf("Enter two numbers: ");
    scanf("%d %d",&m,&n);

    for(int i=1;i<=m && i<=n;i++){
        if(m%i == 0 && n%i ==0){
            result = i;
        }
    }
    printf("Hcf of two number is %d",result);
}