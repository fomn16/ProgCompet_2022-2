//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int t;
string s = "codeforces";
char c;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>t;

    for(int i = 0; i < t; i++){
        cin>>c;
        if (s.find(c) != std::string::npos)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}