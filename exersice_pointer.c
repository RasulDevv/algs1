#include <stdio.h>

void change(int*a, int*b){
    int r = *a;
    *a = *b;
    *b = r;
}

int main(){
    int x = 11, y = 17;
    change(&x, &y);
    printf("x = %d\ny = %d", x, y);
    return 0;
}