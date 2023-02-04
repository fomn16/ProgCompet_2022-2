//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, a, b;
    cin>>t;
    bool out[t];

    for (int i = 0; i < t; i++)
    {
        cin>>a>>b;
        out[i] = a+b;
    }

    for (int i = 0; i < t; i++)
    {
       cout<<out[i]<<'\n';
    }

    return 0;
}