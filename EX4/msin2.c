#include <stdio.h>

int main() {
  int i=-1, y;
  double x,PI=4.0f;
  for (y=1;((int)(PI*100000)!=314159);y++) {
    x=2*y+1;
    PI+=i*4/x;
    i*=-1;
  }
  printf("無條件進位:\n當x=4/%.f\n執行%d次\nPI=%.5f", x, y, (double)((int)(PI*100000))/100000);
  
  return 0;
}
