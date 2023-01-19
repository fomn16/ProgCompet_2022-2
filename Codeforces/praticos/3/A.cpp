//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

unsigned primeiroUm(unsigned a){
    unsigned out = 1;
    while(!(a&out))
        out<<=1;
    return out;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;

    cin>>t;

    unsigned out[t], tmp;

    for(int i = 0; i < t; i ++){
        cin>>tmp;
        if(!(tmp & (tmp-1))) //se é potencia de 2, adiciona 1 no lsb
            if(tmp == 1)
                out[i] = 3;
            else
                out[i] = tmp | 1;
        else
            out[i] = primeiroUm(tmp);
    }

    for(int i = 0; i < t; i ++)
        cout<<out[i]<<'\n';

    return 0;
}