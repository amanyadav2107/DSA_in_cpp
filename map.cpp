// #include <iostream>
// #include<map>

// using namespace std;

// int main() {
//     map<int, int> mp;

//     mp[5]=25;
//     mp[1]=1;
//     mp[3]=9;
//     for(auto pair : mp){
//         cout<<pair.first<<" "<<pair.second<<endl;
//     }
    
//     return 0;
// }

// #include <iostream>
// #include<map>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     map<<int,long long>mp;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         mp[x]=x*x;
//     }
//     for(auto pair : mp){
//         cout<<pair.first<<" "<<pair.second<<endl;
//     }
    
//     return 0;
// }

// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;

//     map<int, int> mp;

//     for(int i = 0; i < N; i++) {
//         int x;
//         cin >> x;
//         mp[x] = x * x;
//     }

//     for(auto it : mp) {
//         cout << it.first << " " << it.second << endl;
//     }

//     return 0;
// }


#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    unordered_map<int, int> freq;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    int uniqueCount = 0;
    int nonUniqueCount = 0;

    for(auto x : freq) {

        if(x.second == 1)
            uniqueCount++;

        else
            nonUniqueCount++;
    }

    cout << uniqueCount * nonUniqueCount;

    return 0;
}