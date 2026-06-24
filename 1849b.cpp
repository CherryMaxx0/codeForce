
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
        long long ind_cout[n];
        cin>>n>>k;
        long long monster[n];
        for(int i : monster) {
            cin>>monster[i];
        }
        long long ind;
        while((*max_element(monster,monster + n))||(*max_element(monster,monster + n))<0) {
            long long temp;
            for(int i=0;i<n;i++) {
                if (monster[i]==*max_element(monster,monster + n)) {
                    monster[i]-=k;
                    temp=i;
                }
            }
            for(ind;)
        }
        
        for(int i=0;i<n;i++) {
            cout<<monster[i];
        }
    }
        // long long temp;
        // for(int i=0;i<n;i++) {
        //     if (arr[i]<arr[i+1]) temp=arr[i+1];
        // }
}