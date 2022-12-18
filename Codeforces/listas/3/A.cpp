//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long n, t, c, tmp, prisioneiros = 0, total = 0;

    cin>>n>>t>>c;

    for(long i = 0; i < n; i++){
        cin>>tmp;

        if(tmp <= t){
            prisioneiros++;
        }
        else{
            prisioneiros = 0;
        }

        if(prisioneiros >=c)
            total++;
    }

    cout<<total;
    
    return 0;
}