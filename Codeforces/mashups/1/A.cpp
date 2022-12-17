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
    long out[t] = {0};
    for (long i = 0; i < t; i++){
        string n;
        long max = 0;
        cin>>n;
        for(char c: n){
            int ci = c - '0';
            if(ci > 1 && ci > max){
                max = ci;
            }
        }
        if(max != 0)
            out[i] = max;
        else{
            out[i] = 1;
        }
    }

    for (long i = 0; i < t; i++){
        cout<<out[i]<<'\n';
    }
    return 0;
}