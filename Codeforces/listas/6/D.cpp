//s = n*(a1+an)/2

//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int m, n, k;

bool isSub2(int* maze, int x, int y){
    if(x > 0)
}

bool isSub(int* maze, int x, int y  ){
    if(x > 0 && maze[x-1][y] == '.'){
        return isSub2(maze, x-1, y);
    }
    else if(x > 0 && maze[x-1][y] == '.'){
        return isSub2(maze, x-1, y);
    }
    else if(x > 0 && maze[x-1][y] == '.'){
        return isSub2(maze, x-1, y);
    }
    else if(x > 0 && maze[x-1][y] == '.'){
        return isSub2(maze, x-1, y);
    }
    return false;
}

int dfs(int* maze, int x = 0, int y = 0, int d = 0){
    //vê se está subdividido. Se tiver, retorna falso
    //se não tiver subdividido, 
    //  se d == k
    //      retorna verdadeiro
    //  se não
    //      atualiza x e y até o próximo "."
    //      transforma "." em "x", chama dfs
    //      se retornar verdadeiro, 
    //          retorna verdadeiro
    //      se não 
    //          transforma de volta pra ".", chama dfs, retorna o que receber
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>m>>n>>k;

    char maze[n][m];

    for(int y = 0; y < m; y++){
        for (int x = 0; x < n; x++){
            cin>>maze[x][y];
        }
    }

    dfs(maze);

    for(int y = 0; y < m; y++){
        for (int x = 0; x < n; x++){
            cout<<maze[x][y];
        }
    }

    return 0;
}