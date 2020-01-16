#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
    //max is first element
    int max = a;

    //check most big number
    if (max<b){
        max = b;
    }
    if (max<c) {
        max = c;
    }
    if (max<d) {
        max = d;
    }
    return max;
}

int main() {
    //get numbers
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    //find max
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
