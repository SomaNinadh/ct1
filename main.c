/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int testnum1,testnum2;
    int sum,sub,mod;
    float mult,division;
    scanf("%d %d ",&testnum1,&testnum2);
    sum= testnum2+testnum1;
    sub= testnum2 - testnum1;
    division= testnum1/testnum2;
    mult = testnum2*testnum1;
    mod = testnum1%testnum2;
    printf("addition= %d",sum);
    printf("subtraction  = %d",sub);
    printf("mod = %d",mod);
    printf("mult = %f",mult);
    printf("division = %f",division);
    if (mult > sum)
    printf("multiplication is greater than addition");
    else 
    printf("addition is greater than multiplication");
    

    return 0;
}
