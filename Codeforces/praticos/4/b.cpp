//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string in;
int m;
set<string> visited;

void dfs(string pre = "", int index = 0){
    if(index == m){
        visited.emplace(pre);
        return;
    }

    dfs(pre, index+1);
    
    pre += in[index];
    dfs(pre, index+1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>in;
    m = in.size();
    dfs();

    for(string s : visited){
        cout<<s<<'\n';
    }
    return 0;
}