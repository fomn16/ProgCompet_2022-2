//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

queue<pair<long ,long >> states;

bool visited[20001] = {false};

long m, n, tmp;

pair<long, long> tmp2;

int bfs(){
    while(!states.empty()){
        tmp2 = states.front();
        states.pop();
        visited[tmp2.first] = true;

        if(tmp2.first == m)
            return tmp2.second;

        if(tmp2.first*2 <= 2*m+1){
            if(!visited[tmp2.first*2]){
                if(tmp2.first*2 == m)
                    return tmp2.second + 1;
                states.emplace(tmp2.first*2, tmp2.second+1);
            }
        }

        if(tmp2.first != 0){
            if(!visited[tmp2.first-1]){
                if(tmp2.first-1 == m)
                    return tmp2.second + 1;
                states.emplace(tmp2.first-1, tmp2.second+1);
            }
        }
    }

    return -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m;

    states.emplace(n, 0);
    cout<<bfs();

    return 0;
}