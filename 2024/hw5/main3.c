#include <stdio.h>

int main () 
{
  int x=1, y=1;
  for(x;y<=9;x++) {
    printf("%d*%d=%d\t", x, y, x*y);
    if (x==9) {
      printf("\n");
      x=0, y++;
    }
  }
  return 0;
}
