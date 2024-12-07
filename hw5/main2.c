#include <stdio.h>
int main()
{
    double z;//x=4/z
    double PI=0;
    int y;
    
    //無條件捨去
    for (y=0;((int)(PI*100000))!=314159;y++) {
        if (y%2==0) //如果y是偶數，z=(2y+1)
            z=((y*2)+1); 
        else //如果y是奇數，z=(-2y-1)
            z=(-(y*2)-1); 
        PI+=4.0/z; //PI=4/1-4/3+4/5-4/7+......
        //printf("%.f, %.5f\n", z, PI);
    }
    if (z<=0) 
        z=-z;
    printf("無條件捨去:當x=4/%.f,PI=%.5f", z, (double)((int)(PI*100000))/100000);
    //如果PI無條件捨去時=3.14159結束迴圈並印出x和PI

  return 0;
}
