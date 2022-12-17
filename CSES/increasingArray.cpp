//g++ main.cpp -o main.exe  -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n = 0;
    cin>>n;
    unsigned long sum = 0;
    unsigned long in [2] = {0,0};
    short atual;
    cin>>in[1];
    for (int i = 0; i < n-1; i++){
        atual = i%2;
        cin>>in[atual];
        if(in[atual]<in[!atual]){
            sum += in[!atual] - in[atual];
            in[atual] = in[!atual];
        }
    }
    cout<<sum;
    return 0;
}