
#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>


using namespace std;

int main(void) {
    int t;
    cin>>t;
    while(t--) {
        long long n,k;
        cin>>n>>k;
        long long monster[n];
        for(int i=0;i<n;i++) {
            long long temp1;
            cin>>temp1;
            if (temp1%k==0) monster[i]=k; 
            else monster[i]=temp1%k;
        }
        int loopState = *max_element(monster,monster + n);
        while(loopState-=k) {
            for (int i=0;i<n;i++) {
                if (monster[i]==*max_element(monster,monster + n)){
                    cout<<i<<" ";
                }
            }
        }
    }
}


// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         long long k;
//         cin >> n >> k;

//         vector<pair<long long,int>> v;

//         for (int i = 1; i <= n; i++) {
//             long long a;
//             cin >> a;

//             long long rem = a % k;

//             if (rem == 0)
//                 rem = k;

//             v.push_back({rem, i});
//         }

//         sort(v.begin(), v.end(),
//             [](auto &a, auto &b) {
//                 if (a.first != b.first)
//                     return a.first > b.first;
//                 return a.second < b.second;
//             });

//         for (auto &p : v)
//             cout << p.second << ' ';

//         cout << '\n';
//     }
// }