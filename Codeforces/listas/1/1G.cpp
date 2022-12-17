//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int digitSum(int n){
    int s = 0;
    int nn = n/10;
    for(int i = 0; i < 4; i++){
        s += n - (nn)*10;
        n = nn;
        nn /= 10;
    }
    return s; 
} 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, a, b, ds;
    long sum = 0;
    cin>>n;
    cin>>a;
    cin>>b;

    for(int i = 1; i <= n; i++){
        ds = digitSum(i);
        if(ds >= a && ds <= b)
            sum += i;
    }

    cout<<sum;
    return 0;
}