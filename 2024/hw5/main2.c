#include <stdio.h>
int main()
{
    long double z;//x=4/z
    double PI=4.0f;
    int y;
    
    //無條件捨去
    for (y=1;((int)(PI*100000))!=314159;y++) {
        if (y%2==0) //如果y是偶數，z=(2y+1)
            z=4.0/((y*2)+1); 
        else //如果y是奇數，z=(-2y-1)
            z=4.0/(-(y*2)-1); 
        PI+=z; //PI=4/1-4/3+4/5-4/7+......
        //printf("%.f, %.5f\n", z, PI);
    }
    if (z<=0) 
        z=-z;
    printf("無條件捨去:\n當x=4/%.Lf\n執行%d次\nPI=%.5f", 4/z, y, (double)((int)(PI*100000))/100000);
    //如果PI無條件捨去時=3.14159結束迴圈並印出x和PI

  return 0;
}
