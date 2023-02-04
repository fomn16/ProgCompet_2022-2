//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin>>s;

    long comidas = 0;
    long naRa = 0;
    bool raPresente = false;

    for(char c : s){
        if(c == '.'){
            if(raPresente)
                naRa++;
        }
        else if(c == 'r'){
            if(raPresente){
                comidas += naRa;
                naRa = 0;
            }
            else{
                raPresente = true;
            }
        }
        else{
            if(raPresente){
                naRa = 0;
                raPresente = false;
            }
        }
    }

    cout<<naRa + comidas;

    return 0;
}