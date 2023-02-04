//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool differentDigits(int n){
    int nn = n/10;
    bool pastDigits[10] = {false};
    int cd;
    for(int i = 0; i < 4; i++){
        cd = n - (nn)*10;
        if(pastDigits[cd])
            return false;
        pastDigits[cd] = true;
        n = nn;
        nn /= 10;
    }
    return true; 
} 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    n++;
    for(; ; n++){
        if(differentDigits(n))
            break;
    }

    cout<<n;
    return 0;
}