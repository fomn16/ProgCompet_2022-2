//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    stack<char> st;

    for(char c : s){
        if(st.size()){
            if(c == st.top())
                st.pop();
            else
                st.push(c);
        }
        else
            st.push(c);
    }

    if(st.size())
        cout<<"No";
    else
        cout<<"Yes";
    return 0;
}