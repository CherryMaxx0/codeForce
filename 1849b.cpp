
#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
//SOLVED
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<pair<long long,int>> v;

        for (int i = 1; i <= n; i++) {
            long long a;
            cin >> a;

            long long rem = a % k;

            if (rem == 0)
                rem = k;

            v.push_back({rem, i});
        }

        sort(v.begin(), v.end(),
            [](auto &a, auto &b) {
                if (a.first != b.first)
                    return a.first > b.first;
                return a.second < b.second;
            });

        for (auto &p : v)
            cout << p.second << ' ';

        cout << '\n';
    }
    
}
// This are not possible to meet the conditions it requires all at once
// int main(void) {
//     int t;
//     cin>>t;
//     while(t--) {
//         long long n,k;
//         cin>>n>>k;
//         long long monster[n];
//         vector<long long> uniqHealth;
//         bool isFirstKillExist=true;
//         for(long long i=0;i<n;i++) {
//             bool isNotExistTrue=true;
//             long long a;
//             cin>>a;
//             if (a%k==0) {
//                 if (i==0) uniqHealth.push_back(a%k);
//                 else monster[i]=k;
//             } else {
//                 if (i==0) uniqHealth.push_back(a%k);
//                 else monster[i]=a%k;
//             }
//             for(long long j=0;j<uniqHealth.size();j++){
//                 if(uniqHealth[j]==monster[i]) {
//                     if(k==uniqHealth[j]) isFirstKillExist=false;
//                     isNotExistTrue=false;
//                     break;
//                 }
//             }
//             if(isNotExistTrue) uniqHealth.push_back(monster[i]);
//             if(isFirstKillExist) uniqHealth.insert(uniqHealth.begin(),k);
//         }
//         for (const auto& val : uniqHealth) cout<<val<<" ";
//     }       
// }


// for(long long i=0;i<uniqHealth.size();i++) {
//     cout<<uniqHealth[i]<<' ';
// }
// }