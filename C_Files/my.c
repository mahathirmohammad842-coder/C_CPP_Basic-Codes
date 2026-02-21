
#include<stdio.h>

int main(){
int i;

scanf("%d", &i);      // i = 0
if (++i) {            // i becomes 1 → condition is true
    int i = 36;       // new local 'i' shadows the outer 'i'
    int x = i--;      // x = 36, then inner i becomes 35
    printf("%d\n", x); // prints 36
}
printf("%d\n", i);     // refers to outer i = 1
}
