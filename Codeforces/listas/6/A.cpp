//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n, t, a, curr = 1;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>t;
    for(int i = 1; i <= n; i++){
        if(i > t){
            cout<<"NO";
            return 0;
        }

        cin>>a;
        
        if(i == curr){
            if(i == t){
                cout<<"YES";
                return 0;
            }
            curr += a;
        }
    }

    cout<<"NO";

    return 0;
}