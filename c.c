#include <stdio.h>
#include <math.h>
 int main() {
    int x,y;
    printf("enter two numbers: ");
    scanf("%d %d",&x,&y);
    int sum,diff,product,quotient,modulus;
    sum = x+y;
    diff = x-y;
    product = x*y;
    quotient = floor(x/y);
    modulus = x%y;
    printf("sum: %d\ndiff: %d\nproduct: %d\nquotient:%d\nmodulus:%d",sum,diff,product,quotient,modulus);
 }