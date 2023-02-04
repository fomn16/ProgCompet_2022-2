//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    char letras[26], tmp, paraMaiuscula = 'A' - 'a';
    map<char, char> m;
    long n;
    string tmp2;

    for (int i = 0; i < 26; i++){
        cin>>letras[i];
    }

    for (int i = 0; i < 26; i++){
        cin>>tmp;
        m.emplace(letras[i], tmp);
        m.emplace(letras[i] + paraMaiuscula, tmp + paraMaiuscula);
    }

    for (int i = 0; i < 10; i++){
        m.emplace('0' + i, '0' + i);
    }

    cin>>n;

    string out[n] = {""};

    for(long i = 0; i < n; i++){
        cin>>tmp2;
        for(char c : tmp2){
            out[i] += m[c];
        }
    }

    for(long i = 0; i < n; i++){
        cout<<out[i]<<'\n';
    }

    return 0;
}