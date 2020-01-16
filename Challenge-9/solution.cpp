#include <iostream>
#include <string>
using namespace std;

int main() {
    // variables
    int len, len2;

    // get the string
    string a, b;
    cin >> a >>  b;

    //print sizes
    len = a.size();
    len2 = b.size();
    cout << len << " " << len2 << endl;

    // print total string
    cout << a +b <<endl;

    //swap first values from strings
    swap( a[0], b[0]);
    cout << a << ' ' <<  b << endl;
    return 0;
}

