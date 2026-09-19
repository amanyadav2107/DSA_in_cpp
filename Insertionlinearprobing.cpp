// Linear Probing in Hashing
#include <iostream>
using namespace std;

#define SIZE 10

int hashTable[SIZE];

void insert(int key)
{
    int index = key % SIZE;

    
    while (hashTable[index] != -1)
    {
        index = (index + 1) % SIZE;
    }

    hashTable[index] = key;
}

void display()
{
    cout << "\nHash Table:\n" <<endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << i << " --> " << hashTable[i] << endl;
    }
}

bool search(int key) {
    int index = key % SIZE;
    int start = index;

    while (hashTable[index] != -1) {
        if (hashTable[index] == key)
            return true;
        index = (index + 1) % SIZE;
        if (index == start) break;
    }
    return false;
}

int main()
{
    for (int i = 0; i < SIZE; i++)
    {
        hashTable[i] = -1;
    }

    int n, key;

    cout << "Enter number of keys: ";
    cin >> n;
    
    cout << "Enter key: " <<endl;
    for (int i = 0; i < n; i++)
    {
        // cout << "Enter key: " <<endl;
        cin >> key;

        insert(key);
    }

    display();

    return 0;
}