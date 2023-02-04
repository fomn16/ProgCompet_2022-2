//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long t;
    cin>>t;
    long in[t];

    for (long i = 0; i < t; i++){
        cin>>in[i];
    }

    for (long i = 0; i < t; i++){
        long half = in[i]/2;
        //se numero sobre 2 for impar, não existe
        if(half%2){
            cout<<"NO\n";
        }
        //gera pares, depois impares, metade dos quais = par - 1, e outra metade par + 1
        else{
            cout<<"YES\n";
            for(long j = 1; j <= half; j++){
                cout<<j*2<<" ";
            }
            for(long j = 1; j <= half/2; j++){
                cout<<(j*2)-1<<" ";
            }
            for(long j = half/2 + 1; j <= half; j++){
                cout<<(j*2)+1<<" ";
            }
            cout<<'\n';
        }
    }

    return 0;
}