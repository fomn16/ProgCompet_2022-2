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
    long tot = 0;
    int currSize = 0;
    char c;
    for (long i = 0; i < t; i++){
        cin>>c;
        if(c == 'x'){
            currSize ++;
        }
        else if(currSize != 0){
            if(currSize > 2)
                tot += currSize - 2;
            currSize = 0;
        }
    }
    if(currSize > 2)
        tot += currSize - 2;
    cout<<tot;
    return 0;
}