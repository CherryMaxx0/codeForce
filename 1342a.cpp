#include <iostream>

using namespace std;

int main(void) {
    long long int t,x,y,a,b,sum=0;
    cin>>t;
    while(t--){
    while(t--){
        int n=0;
        cin>>x>>y;
        cin>>a>>b;
        if(b<a){
            n=abs(x-abs(x-y));
        } else if(a<b){
            n=abs(x-abs(x-y));

        }
        cout<<sum<<endl;
    }
}