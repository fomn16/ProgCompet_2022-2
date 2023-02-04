//g++ main.cpp -o main.exe  -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    multimap<unsigned, unsigned> times;
    unsigned n;
    cin>>n;
    for (unsigned i = 0; i<n; i++){
        unsigned t1, t2;
        cin>>t1>>t2;
        times.insert(pair<unsigned, unsigned>(t2,t1));
    }

    unsigned total = 0;
    n = 0;
    for (pair<unsigned, unsigned> i : times){
        if(i.second>=n){
            total++;
            n = i.first;
        }
    }
    cout<<total;
    return 0;
}