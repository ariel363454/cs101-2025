#include <stdio.h>
int main()
{
    int before=12345;
    int a, b, c, d, after;
    
    a=before/1000%10;
    b=before%10;
    c=a*1000+b;
    d=b*1000+a;
    after=before-c+d;
    //printf("%d, %d, %d, %d\n", a, b, c, d);
    printf("調換前:%d\n調換後:%d", before, after);
    
    return 0;
}
