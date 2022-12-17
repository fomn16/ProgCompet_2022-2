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

    long i = 0;

    for(char c : s){
        if(c == '('){
            i++;
        }
        else if(c == ')'){
            i--;
        }
        if(i < 0){
            cout<<"nao";
            return 0;
        }
    }

    if(i == 0)
        cout<<"sim";
    else
        cout<<"nao";

    return 0;
}