//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int myAbs(int a){
    if(a>=0)
        return a;
    return -a;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, xc, yc, x, y, v, mv, ml;
    cin>>n;
    cin>>xc;
    cin>>yc;
    
    for(int i = 0; i < n; i++){
        cin>>x;
        cin>>y;
        cin>>v;
        v += 2*(myAbs(x - xc) + myAbs(y - yc));
        if(v < mv || i == 0){
            mv = v;
            ml = i+1;
        }
    }

    cout<<mv<<' '<<ml;
    return 0;
}