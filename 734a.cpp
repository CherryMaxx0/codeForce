#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(void) {
    int len;
    int Anton=0,Danik=0;
    cin>>len;
    char str[len];
    cin>>str;
    for(int i=0;i<len;i++) {
        if (str[i]=='A'||str[i]=='a') Anton++;
        else if (str[i]=='D'||str[i]=='d') Danik++;
    }
    if(Anton>Danik) cout<<"Anton"<<endl;
    else if(Anton<Danik) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
}