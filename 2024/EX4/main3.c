#include <stdio.h>

int main() {
  int xy;
  for (xy=1;xy<=81;xy++) {
    if (xy%9==0) {
      printf("%d*9=%d\n",xy/9,xy);
      continue;
    }
    printf("%d*%d=%d\t",xy/9+1,xy%9,(xy/9+1)*(xy%9));
  }
  return 0;
}
