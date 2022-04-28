

#include <stdio.h>

int main()
{
    int testnum1,testnum2;
    int sum,sub,mod;
    float mult,division;
    char b = 'G';
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
    printf("Hello! I am a character. My value is %c and my size is %lu byte.\n",b, sizeof(char));
    if (mult > sum)
    printf("multiplication is greater than addition");
    else 
    printf("addition is greater than multiplication");
    if ((mult==division)&&(division > 0))
      printf("both the test numbers is equal to 1");
    

    return 0;
}
