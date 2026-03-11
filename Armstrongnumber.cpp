#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num,remainder,n,result ;
    cout << "Enter a number: ";
    cin >> num;

    int original = num;
    while (original != 0) {
        original /= 10;
        ++n;
    }
    original = num;
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    if ((int)result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}