//g++ main.cpp -o main.exe  -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned n;
    cin>>n;
    if(n < 4 && n != 1){
        cout<<"NO SOLUTION";
        return 0;
    }
    
    for (unsigned i = 2; i <= n; i+=2)
        cout<<i<<' ';
    for (unsigned i = 1; i <= n; i+=2)
        cout<<i<<' ';
    return 0;
}