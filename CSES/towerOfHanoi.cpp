//g++ main.cpp -o main.exe  -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int otherOption(int a, int b){
    if(a == 1){
        if(b == 2)
            return 3;
        return 2;
    }
    if(a == 2){
        if(b==1)
            return 3;
        return 1;
    }
    if(b == 1)
        return 2;
    return 1;
}

void move(int n, int a, int b,  list<pair<int,int>>* out){
    if(n == 1){
        out->push_back(pair<int,int>(a,b));
        return;
    }
    int other = otherOption(a,b);
    move(n-1, a, other, out);
    move(1, a, b, out);
    move(n-1, other, b, out);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    list<pair<int,int>> ret;
    move(n, 1, 3, &ret);
    cout<<ret.size()<<'\n';
    for (auto i : ret)
        cout<<i.first<<' '<<i.second<<'\n';

    return 0;
}