#include <stdio.h>
int multi(int i, int j) {
    if (j==1) {
        printf("%d*%d=%d", i, j, i*j);
        return 0;
    }else{
        multi(i, j-1);
        printf("\t%d*%d=%d", i, j, i*j);
    }
}

int main(){
    int k;
    for(k=1;k<=9;k++) {
        multi(k,9);
        printf("\n");
    }
    return 0;
}
