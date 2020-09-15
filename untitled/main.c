#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <stdbool.h>

int main() {
    int a = 1;
    int b = 2;
    int *pA = &a;

    printf("%d\n",&a);
    printf("%d\n",*&a+b);
    printf("%d\n",pA+a);
    printf("%d\n",*pA);
    printf("%d\n",&pA);

    return 0;
}
