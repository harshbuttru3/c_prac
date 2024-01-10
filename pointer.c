#include <stdio.h>
int main(){
int a =4;
// printf("%u\n", &a);
int *b = &a;
printf("%u\n", b);
int *c = &b;
printf("%u", c);

return 0;
}

