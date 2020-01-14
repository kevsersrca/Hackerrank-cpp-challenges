#include <iostream>
#include <cstdio>
#include <string>
#include <array>
using namespace std;

struct numberDictionary {
    int number;
    string dict;
};


string numberToEnglish(int n) {
    struct numberDictionary NatureNumbers[10] = {
            {1, "one"},
            {2, "two"},
            {3, "three"},
            {4, "four"},
            {5, "five"},
            {6, "six"},
            {7, "seven"},
            {8, "eight"},
            {9, "nine"},
    };
    for (int i=0;i<10;i++) {
        if (NatureNumbers[i].number == n) {
            return NatureNumbers[i].dict;
        }
    }
    return "";
}
int main() {
    std::array<int,2> numberArray;
    cin>>numberArray[0];
    cin>>numberArray[1];

    for (int i=numberArray[0]; i<=numberArray[1];i++) {
        if (i >0 && i < 10) {
            cout << numberToEnglish(i) << endl;
        }
        if (i > 9 && i % 2 == 0) {
            cout << "even" << endl;
        }
        if (i > 9 && i % 2 != 0) {
            cout << "odd" << endl;
        }
    }

    return 0;
}

