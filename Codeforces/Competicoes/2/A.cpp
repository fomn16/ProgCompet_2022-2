//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int t, n;
list<int> out;


void myCopy(vector<int> a, vector<int>b, int n){
    for (int i = 0; i < n; i++){
        b[i] = a[i];
    }
}

void printarr(vector<int> a, int n, string s = "out:"){
    cout<<s;
    for (int i = 0; i < n; i++){
        cout<<a[i]<<' ';
    }
    cout<<'\n';
}

int bfs(vector<int> h){
    queue<pair<vector<int>, int>> state;
    state.emplace(h, 0);

    while(!state.empty()){
        pair<vector<int>, int> s = state.front();

        //printarr(s.first, n, "in:");
        state.pop();
        
        bool done = true;
        for(int i = 0; i < n; i++){
            if(s.first[i] > 0)
                done = false;
        }

        if(done)
            return s.second;

        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                if(s.first[i] > 0 && s.first[j] > 0){
                    vector<int>newHps(n,0);
                    for (int a = 0; a < n; a++){
                        newHps[a] = s.first[a];
                    }
                    newHps[i]--;
                    newHps[j]--;
                    state.emplace(newHps,s.second + 1);
                    //printarr(newHps, n);
                }
            }
        }

        for(int i = 0; i < n; i++){
            if(s.first[i]>0){
                vector<int>newHps(n,0);

                for (int a = 0; a < n; a++){
                    newHps[a] = s.first[a];
                }

                newHps[i] = 0;
                state.emplace(newHps,s.second + 1);
                //printarr(newHps, n);
            }
        }
    }

    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin>>t;

    for(int i = 0; i < t; i++){
        cin>>n;
        vector<int>hps(n,0);
        for(int j = 0; j < n; j++)
            cin>>hps[j];
        out.emplace_back(bfs(hps));
        //cout<<'\n';
    }

    for(int o : out){
        cout<<o<<'\n';
    }

    return 0;
}