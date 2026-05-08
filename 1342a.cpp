#include <iostream>
using namespace std;

int main(void) {
    int t,x,y,a,b,sum=0;
    cin>>t;
    while(t){
        int n=0;
        cin>>x>>y;
        cin>>a>>b;
        if (x>y) {
            for(int i=0;i<x-y;i++){
                sum+=a;
            }
            n=y;
        } else if (y>x) {
            for(int i=0;i<y-x;i++) {
                sum+=a;
            }
            n=x;
        } 
        if(n) {
            for(int i=0;i<n;i++) sum+=b;
        } else sum=0;
        t--;
        cout<<sum<<endl;
    }
}