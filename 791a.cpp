#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    int a,b,iYear=1;
    cin>>a>>b;
    int c=a,d=b;
    for(iYear;c<=d;iYear++){
        c=a*pow(3,iYear);
        d=b*pow(2,iYear);
    }
    cout<<iYear-1<<endl;
}
