//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef int dtype;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    dtype n, lst = -1, curr, arrange = 0, boxes = 0;
    string tmp;
    cin>>n;

    for(dtype i = 0; i < 2*n; i++){
        cin>>tmp;
        if(tmp != "remove"){
            cin>>tmp;
            curr = atoi(tmp.c_str());
            if(boxes && curr != lst - 1)
                arrange++;
            lst = curr;
            boxes++;
        }
        else
            boxes--;
    }

    cout<<arrange;
    
    return 0;
}