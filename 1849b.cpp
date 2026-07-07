
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
<<<<<<< HEAD
        for(long long i=0;i<n;i++) {
            long long a;
            cin>>a;
            if (a%k==0) {
                if (i==0) uniqHealth.push_back(k);
                else monster[i]=k;
            } else {
                if (i==0) uniqHealth.push_back(a%k);
                else monster[i]=a%k;
            }
            for(long long j=0;j<uniqHealth.size();j++){
                if(uniqHealth[j]!=monster[i]) {
                    uniqHealth.push_back(monster[i]); 
                    break;
=======

        for(long long i=0;i<n;i++) {
            long long a;
            cin>>a;
            if (a%k==0) monster[i]=k;
            else monster[i]=a%k;
            if(i==0) {
                uniqHealth.push_back(monster[i]);
                continue;
            }
            bool isMatchNotExist=false;
            bool isZeroMatchNotExist=false;
            for(long long j=0;j<uniqHealth.size();j++){
                if(monster[i]==k) {
                    if(uniqHealth[j]==monster[i]) isZeroMatchNotExist=false;   
                    else isZeroMatchNotExist=true;     
                } else {
                    if(uniqHealth[j]==monster[i]) isMatchNotExist=false;
                    else isMatchNotExist=true;    
>>>>>>> 1cc480f567762cded8ee67736f4b0e519ff424d5
                }
            }
            if (isMatchNotExist) uniqHealth.push_back(monster[i]); 
            if (isZeroMatchNotExist) uniqHealth.insert(uniqHealth.begin(),monster[i]);
        }
<<<<<<< HEAD
        for (int )
        cout<<uniqHealth;
=======
        for(long long i=0;i<uniqHealth.size();i++) {
            for(long long j=0;j<n;j++) {
                if(monster[j]==uniqHealth[i]) cout<<j+1<<' ';
            }
        }
        cout<<endl;
>>>>>>> 1cc480f567762cded8ee67736f4b0e519ff424d5
    }       
}


// for(long long i=0;i<uniqHealth.size();i++) {
//     cout<<uniqHealth[i]<<' ';
// }
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