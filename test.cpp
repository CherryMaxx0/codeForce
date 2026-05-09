#include <iostream>
#include <string>
using namespace std;

int main(void){
    srand(time(NULL));
    int r=rand();

    cout<<r%26;
}