#include <stdio.h>

int main()
{
    int num=12345;
    int sum=0;
    int firstDigit,lastDigit;
    int a;
    lastDigit=num%10;
    for (a=0;num!=0;num/=10) {
        a=a*10+num%10;
    }
    firstDigit=a%10;
    sum=firstDigit+lastDigit;
    printf("Sum=%d",sum);

    return 0;
}
