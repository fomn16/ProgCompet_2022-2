//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool canBeWrittenWith(long a, vector<long> b){
    if(a == 1 || b.size() == 0)
        return false;
    reverse(b.begin(), b.end());
    for(auto i : b){
        if(i <= a)
            a-=i;
    }
    return a == 0;
}

vector<long> selectNums(vector<long> options, long curr = 0, vector<long> selected = {}){
    vector<long> out;
    if(curr == 7)
        return selected;
    if(!canBeWrittenWith(options[curr],selected)){
        selected.emplace_back(options[curr]);
        
    }
    return out;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long t, tmp;
    vector<vector<long>>out;
    cin>>t;
    for (long i = 0; i < t; i++){
        vector<long>in;
        for(int j = 0; j < 7; j++){
            cin>>tmp;
            if(!canBeWrittenWith(tmp,in)){
                in.emplace_back(tmp);
            }
        }
        out.emplace_back(in);
    }

    for (auto a : out){
        for (auto b : a){
            cout<<b<<' ';
        }
        cout<<'\n';
    }

    return 0;
}