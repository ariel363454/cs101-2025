#include <stdio.h>

int main()
{
    int n=15;
    for (int a=0;n!=0;n/=2) {
        if (n%2==1) {
            a++;
        }
    }
    printf("%d",a);

    return 0;
}
