#include <iostream>
#include <vector>
using namespace std;

class HashTable {
private:
    int size;                  
    vector<int> table;         

public:
    HashTable(int s) {
        size = s;
        table.resize(size, -1); 
    }

    
    int hashFunction(int key) {
        return key % size;
    }

    
    void insert(int key) {
        int index = hashFunction(key);

        
        while (table[index] != -1) {
            index = (index + 1) % size;
        }
        table[index] = key;
    }

    
    void display() {
        for (int i = 0; i < size; i++) {
            if (table[i] != -1)
                cout << i << " --> " << table[i] << endl;
            else
                cout << i << " --> " << "EMPTY" << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter size of hash table: ";
    cin >> n;

    HashTable ht(n);

    int keys[] = {23, 43, 13, 27};
    int numKeys = sizeof(keys) / sizeof(keys[0]);

    for (int i = 0; i < numKeys; i++) {
        ht.insert(keys[i]);
    }

    cout << "\nHash Table after insertion:\n";
    ht.display();

    return 0;
}
