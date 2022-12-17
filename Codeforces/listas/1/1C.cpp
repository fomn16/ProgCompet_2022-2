//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long n;
    cin>>n;
    map<string, int> names;
    string temp;
    for (long i = 0; i < n; i++){
       cin>>temp;
       names.insert(pair<string, int>(temp, i));
    }
    int out[n];
    long j = 0;
    for (auto i : names){
        out[i.second] = j;
        j++;
    }
    for (long i = 0; i < n; i++){
       cout<<out[i]<<' ';
    }

    return 0;
}