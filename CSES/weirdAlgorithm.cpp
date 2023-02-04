//g++ werdAlgorithm.cpp -o main.exe  -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self
#include <bits/stdc++.h>
using namespace std;
int main(){
    long unsigned int n;
    cin>>n;
    string s = to_string(n);
    while(n != 1){
        if(n % 2)
            n = 3*n+1;
        else
            n>>=1;
        s += " "+ to_string(n);
    }
    cout<<s;
    return 0;
}