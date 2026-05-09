#include <iostream>

using namespace std;

int main(void) {
    long long int t,x,y,a,b;
    cin>>t;
    while(t--){
        long long int sum=0;
        int n=0;
        cin>>x>>y;
        cin>>a>>b;
        if(x>=y) n=abs(x-abs(x-y));
        else n=abs(y-abs(x-y));
        if(a<=b){
            long long int sum1=0;
            long long int sum2=0;
            for (int i=0;i<n;i++) sum1+=b;
            n=abs(x-y);
            for(int i=0;i<n;i++) sum1+=a;
            n=x+y;
            for(int i=0;i<n;i++) sum2+=a;
            if (sum1<=sum2) sum=sum1;
            else sum=sum2;
        } else if(b<a){
            for (int i=0;i<n;i++) sum+=b;
            n=abs(x-y);
            for(int i=0;i<n;i++) sum+=a;
        }
        cout<<sum<<endl;
    }
}