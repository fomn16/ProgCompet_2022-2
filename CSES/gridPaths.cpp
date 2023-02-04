//g++ main.cpp -o main.exe  -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//side = 7, max = 6, steps = 7*7-1 = 47
//side = 3, max = 2, steps = 3*3-1 = 8

#define GRID_SIDE 6
#define N_STEPS 35

bool visited[N_STEPS + 1];

int calcPaths(int step = 0, int currX = 0, int currY = 0){
    if(currX==0 && currY == GRID_SIDE-1){
        if(step == N_STEPS){
            return 1;
        }
        else{
            return 0;
        }
    }

    int computedPaths = 0;

    //up
    int x = currX, y = currY - 1;
    int pos = x*GRID_SIDE + y;
    if(y != -1 && !visited[pos]){
        visited[pos] = true;
        computedPaths += calcPaths(step+1, x, y);
        visited[pos] = false;
    }
    
    //down
    y += 2;
    pos = x*GRID_SIDE + y;
    if(y != GRID_SIDE && !visited[pos]){
        visited[pos] = true;
        computedPaths += calcPaths(step+1, x, y);
        visited[pos] = false;
    }

    //left
    y--;
    x--;
    pos = x*GRID_SIDE + y;
    if(x != -1 && !visited[pos]){
        visited[pos] = true;
        computedPaths += calcPaths(step+1, x, y);
        visited[pos] = false;
    }
    
    //right
    x+=2;
    pos = x*GRID_SIDE + y;
    if(x != GRID_SIDE && !visited[pos]){
        visited[pos] = true;
        computedPaths += calcPaths(step+1, x, y);
        visited[pos] = false;
    }
    
    return computedPaths;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout<<calcPaths();
    return 0;
}