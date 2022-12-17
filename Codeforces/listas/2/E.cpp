//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long n, x;
    char c;
    cin>>n;
    list<long> out;
    stack<long> count;
    count.push(0);
    for(int i = 0; i < n; i++){
        cin>>c>>x;
        if(c == 'A'){
            if(x>count.top())
                count.push(x);
            else
                count.push(count.top());
        }
        else if(c == 'V')
        {
            out.push_back(count.top());
        }
        else{
            count.pop();
        }
    }

    for (long o : out){
        cout<<o<<'\n';
    }

    return 0;
}