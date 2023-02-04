//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long myAbs(long a){
    if(a >= 0)
        return a;
    return 0-a;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long t, n, curr, lst, maxCut, minCut;
    cin>>t;
    long out[t] = {0};

    for(int i = 0; i < t; i++){
        cin>>n;
        maxCut = minCut = 0;
        for(int j = 0; j < n; j++){
            cin>>curr;
            if(j == 0)
                lst = curr;

            if(maxCut == 0 && minCut == 0 && lst > curr){
                maxCut = lst;
                minCut = curr;
                out[i] = maxCut;
            }
            
            bool foundCut = false;
            while(true){
                if(myAbs(lst - maxCut) <= myAbs(curr - maxCut)){
                    foundCut = true;
                    break;
                }
            }

            if(!foundCut)
                out[i] = -1;

            lst = curr;
        }
    }

    for(int i = 0; i < t; i++){
        cout<<out[i]<<'\n';
    }

    return 0;
}