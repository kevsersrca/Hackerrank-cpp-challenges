#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    // get line number
    int n;
    cin >> n;

    //array create and fill
    int arr[n];
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }

    //print reversely
    for(int i=n-1;i>=0;i--) {
        cout << arr[i] << " ";
    }
    return 0;
}
