// #include <iostream>

// // int main(void) {
// //     int n;
// //     int sides=2;

// //     while(n>sides || (n+1)==sides) {
        
// //     }

// // }

// #include <cmath>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int ans=sqrt(n*2);
//     cout<<ans;
//     return 0;
// }

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Optimize I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> A(n), B(m);
    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < m; i++) cin >> B[i];

    int i = 0, j = 0;
    while (i < n || j < m) {
        if (i < n && j < m) {
            if (A[i] < B[j]) {
                cout << 'A';
                i++;
            } else {
                cout << 'B';
                j++;
            }
        } else if (i < n) {
            cout << 'A';
            i++;
        } else {
            cout << 'B';
            j++;
        }
    }

    return 0;
}