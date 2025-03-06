#include <stdio.h>

int main() {
  int before=12345;
  int after;
  
  after=before-(before/1000)%10*1000-(before%10)+(before%10*1000)+(before/1000)%10;
  printf("調換前:%d\n調換後:%d",before,after);
  return 0;
}
