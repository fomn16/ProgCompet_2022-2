//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long n, m;
    char temp;
    cin>>n;
    cin>>m;
    long lmin = -1, lmax = 0, cmin = -1, cmax = 0;
    for (long i = 0; i < n; i++){
        for (long j = 0; j < m; j++){
            cin>>temp;
            if(temp == '1'){
                if(i < lmin || lmin == -1)
                    lmin = i;
                if(i > lmax)
                    lmax = i;
                if(j < cmin || cmin == -1)
                    cmin = j;
                if(j > cmax)
                    cmax = j;
            }
        }
    }

    if(lmin == -1 || cmin == -1){
        cout<<"0x0";
    }
    else{
        cout<<(cmax-cmin + 1)<<"x"<<(lmax-lmin + 1);
    }
    return 0;
}