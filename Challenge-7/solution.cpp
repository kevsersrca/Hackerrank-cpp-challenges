#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int lineNumber;
    cin >> lineNumber;
    int arr[lineNumber];
    for (int i=0;i<lineNumber;i++) {
        cin >> arr[i];
    }
    for(int i=lineNumber-1;i>=0;i--) {
        cout << arr[i] << " ";
    }
    return 0;
}
