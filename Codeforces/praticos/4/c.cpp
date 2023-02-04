//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

list<pair<int,int>> choices[3];

queue<tuple<int, int, int>> state;
tuple<int, int, int> tmp;

bool visited[7][7];

int r1, c1, r2, c2, r, c, i, piece;

int bfs(){
    while(!state.empty()){
        tmp = state.front();
        state.pop();
        r = get<0>(tmp);
        c = get<1>(tmp);
        i = get<2>(tmp);

        if(!visited[r][c]){
            if(r == r2 && c == c2)
                return i;
            for (pair<int,int> choice : choices[piece]){
                if(r + choice.first >= 0 && r + choice.first <= 7 && c+ choice.second >= 0 && c+ choice.second <=7){
                    state.emplace(r + choice.first, c + choice.second, i+1);
                }
            }
        }
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    for(int i = 1; i < 8; i++){
        //rook
        choices[0].emplace_back(i,0);
        choices[0].emplace_back(-i,0);
        choices[0].emplace_back(0,i);
        choices[0].emplace_back(0,-i);
        
        //bishop
        choices[1].emplace_back(i,i);
        choices[1].emplace_back(i,-i);
        choices[1].emplace_back(-i,i);
        choices[1].emplace_back(-i,-i);
    }
    //king
    choices[2].emplace_back(1,0);
    choices[2].emplace_back(-1,0);
    choices[2].emplace_back(0,1);
    choices[2].emplace_back(0,-1);

    cin>>r1>>c1>>r2>>c2;

    for (int i = 0; i < 3; i++){
        for(int a = 0; a < 7; a++){
            for(int b = 0; b < 7; b++){
                visited[a][b] = false;
            }
        }
        queue<tuple<int, int, int>> empty;
        swap( state, empty );
        state.emplace(r1, c1, 0);
        piece = i;
        cout<<bfs()<<' ';
    }

    return 0;
}