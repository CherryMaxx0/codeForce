#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void) {
    int t,n,a,b;
    cin>>t;

    while(t--) {
        cin>>n>>a>>b;
        srand(time(NULL));
        int r=rand()%26;
        
        for(int i=0;i<n;i++) {
            char ch='a'+(r+(i%b))%26;
            cout<<ch;
        }
        cout<<endl;
    }
}
