//g++ main.cpp -o main.exe  -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long n;
    cin>>n;
    multiset<int> ins;
    long temp;
    for (long i = 0; i < n; i++){
        cin>>temp;
        ins.insert(temp);
    }

    long out[n];

    cin>>n;
    for (long i = 0; i < n; i++){
        cin>>temp;
        
        auto it = upper_bound(ins.begin(), ins.end(), temp);
        if(it == ins.end()){
            out[i] = 0;
        }
        else{
            out[i] = distance(ins.begin(), it) + 1;
        }
    }

    for (long i = 0; i < n; i++){
        cout<<out[i]<<' ';
    }

    return 0;
}