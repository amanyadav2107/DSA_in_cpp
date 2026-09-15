#include <iostream>
using namespace std;

int main() {
    int arr[] = {29,25,3,49,9,37,21,43};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Maximum element = " << max << endl;
    return 0;
}
