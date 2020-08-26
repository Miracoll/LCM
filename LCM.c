#include <stdio.h>

int gcd(int a,int b);
int main()
{
    int a=10,b=20;
    int LCM;
    LCM = (a*b)/gcd(a,b);
    printf("LCM of %d and %d = %d\n",a,b,LCM);
    return 0;
}
int gcd(int a,int b)
{
    int dividend,divisor,remainder=1;
    int GCD;
    if(a>b){
        if(b==0){
            GCD = a;
            remainder=0;
        }
        else
            dividend = a,divisor = b;
    }
    if(a<b){
        if(a==0){
            GCD = b;
            remainder=0;
        }
        else
            dividend = b,divisor = a;
    }
    while(remainder){
        GCD=remainder;
        remainder = dividend%divisor;
        dividend=divisor;
        divisor=remainder;
        if(divisor==0)
            GCD=dividend;
    }
    return GCD;
}
