#include <stdio.h>

int main()
{
    int i=1000;
    int j;
    if (i<=1500) {
        printf("70元");
        return 0;
    }
    j=i-1500;
    if (j%100==0) {
        printf("%d元",j/10+70);
        return 0;
    }
    printf("%d元",j/100*10+10+70);

    return 0;
}
