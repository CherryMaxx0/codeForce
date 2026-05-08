#include <iostream>
using namespace std;

int main(void) {
    int n,t;
    cin>>n>>t;
    char str[n];
    cin>>str;

    while(t){
        for(int i=0;i<n;i++){
            if(str[i]=='B'&&str[i+1]=='G') {
                char temp=str[i];
                str[i]=str[i+1];
                str[i+1]=temp;
                i++;
            }
        }
        --t;
    }
    cout<<str<<endl;
}