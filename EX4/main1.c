#include <stdio.h>

int main() {
  int n=7;
  int i, j;
  for (i=1;i<=n;i++) {
    printf("% *d", n-i+2, i);
    for (j<=i;j<=i-1;j++) {
      printf(" %d",i);
    }
    printf("\n");
  }
  return 0;
}
