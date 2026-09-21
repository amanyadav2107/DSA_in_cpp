// #include <iostream>
// #include <unsorted_set>
// #include<set>
// using namespace std;

// int main() {
//     unoset<int> s;
//     s.insert(10)
    
//     return 0;
// }

//Set ,Union, Inserter ,Difference
// #include <iostream>
// #include<set>
// #include<algorithm>
// #include<vector>
// using namespace std;

// int main() { 
//     set<int>A={1,2,3};
//     set<int>B={2,3,4};
//     vector<int>res;

//     //Union
//     set_union(A.begin(), A.end(),B.begin(),B.end(), back_inserter(res));
//     cout<<"Union:  ";
//     for(int x: res) cout<< x << "  ";
//     cout<<endl;
//     res.clear();

//     //Intersection
//     set_intersection(A.begin(), A.end(),B.begin(),B.end(), back_inserter(res));
//     cout<<"Union:  ";
//     for(int x: res) cout<< x << "  ";
//     cout<<endl;
    
//     //Difference A-B
//     set_difference(A.begin(), A.end(), B.begin(), B.end(),back_inserter(res));
//     cout<<"Difference(A-B:) ";
//     for(int x: res) cout<< x <<"  ";

    
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n,m;
//     cout<<"Enter length ";
//     cin>>n>>m;
//     string s1, s2;
//     // cout<<"Enter Strings ";
//     cin>>s1>>s2;
    
//     set<char>set1, set2;
//      s

    




    
//     return 0;
// }


// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//     int m, n, x, p = 0, q = 0;
//     cin >> m >> n;

//     set<int> a, b;

//     for (int i = 0; i < m; i++) {
//         cin >> x;
//         a.insert(x);
//     }
    
//     for (int i = 0; i < n; i++) {
//         cin >> x;
//         b.insert(x);
//     }

//     for (int x : a)
//         if (!b.count(x)) p++;

//     for (int x : b)
//         if (!a.count(x)) q++;

//     cout << p * q;
// }


// #include <iostream>
// #include<set>
// #include<algorithm>
// #include<vector>
// using namespace std;

// int main() { 
    // set<int>A={1,2,3};
    // set<int>B={2,3,4};
    // vector<int>res;
    // int n;
    // cout<<"Enters number of Arrays";
    // cin>>n;

    // //Union
    // set_union(A.begin(), A.end(),B.begin(),B.end(), back_inserter(res));
    // cout<<"Union:  ";
    // for(int x: res) cout<< x << "  ";
    // cout<<endl;
    // res.clear();

    // //Intersection
    // set_intersection(A.begin(), A.end(),B.begin(),B.end(), back_inserter(res));
    // cout<<"Union:  ";
    // for(int x: res) cout<< x << "  ";
    // cout<<endl;
    
    //Difference A-B
    // set_difference(A.begin(), A.end(), B.begin(), B.end(),back_inserter(res));
    // cout<<"Difference(A-B:) ";
    // for(int x: res) cout<< x <<"  ";

    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> set1;
    set1.insert(10);
    set1.insert(20);
    set1.insert(5);

    //find
    // if(set1.find(20)!=set1.end())
    // cout<<"Present\n";
    // else
    // cout<<"Absent\n";
    // for(auto value:set1){
    //     cout<<value<<" ";
    // }

    //count
    // if(set1.count(20))
    // cout<<"Present\n";
    // else
    // cout<<"Absent\n";

    cout<<set1.count(20)<<"  ";
}