#include <iostream>
using namespace std;


inline int cube(int num = 2)
{
    return num * num * num;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;
    cout << "Cube of " << n << " is: " << cube(n) << endl;
    cout << "Cube of default (2) is: " << cube() << endl;

    return 0;
}
