#include <stdio.h>
int main(void){
    int i,j,rows;
    printf("Enter the number of rows");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++){
    //printing the leading spaces
        for(j=i;j<=rows;j++){
            printf(" ");
        }
        for(j=1;j<=(2*i -1);j++){
            printf("*");
        }
        printf("\n");
    }
}