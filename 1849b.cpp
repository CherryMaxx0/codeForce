
#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>


using namespace std;

int main(void) {
    int t;
    cin>>t;
    while(t--) {
        long long n,k;
        cin>>n>>k;
        long long monster[n];
        vector<long long> uniqHealth;

        int monsIsTrue=0;
        for(long long i=0;i<n;i++) {
            long long a;
            cin>>a;
            if (a%k==0) monster[i]=0;
            else monster[i]=a%k;
            
            if(monster[i]==monsIsTrue) {
                uniqHealth.insert(uniqHealth.begin(),0);
                monsIsTrue--;
            }
            bool isFalse=true;
            for(long long j=0;j<uniqHealth.size();j++){
                if(uniqHealth[j]==monster[i]) isFalse=false;
                if (isFalse) {
                    uniqHealth.push_back(monster[i]); 
                    break;
                }
            }
        }
        for(long long i=0;i<uniqHealth.size();i++) {
            cout<<uniqHealth[i]<<' ';
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