#include <stdio.h>

void update(int *a,int *b) {
    //two variable collect pointer values
    *a = *a + *b;
    // two variable extract pointer values
    *b = *a - *b - *b;
    // if result is negative. number multiply with -1
    if (*b < 0){*b = *b * -1;}
}

int main() {
    //create a and b variable
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    //update function

    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

