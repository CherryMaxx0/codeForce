#include<iostream>
#include<algorithm>
using namespace std;

int main(void) {
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int t1=(k*l)/nl;
    int t2=c*d;
    int t3=p/np;
    int ntoast=min(min(t1,t2),t3)/n;
    cout<<ntoast<<endl;
}