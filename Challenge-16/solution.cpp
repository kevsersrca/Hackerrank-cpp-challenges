#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int count;
    vector<int>v;
    cin >> count;
    for(int i=0;i<count;i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    for (auto i = v.begin(); i != v.end(); ++i)
        cout << *i << " ";

    return 0;
}
