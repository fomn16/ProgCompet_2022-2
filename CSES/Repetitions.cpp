//g++ main.cpp -o main.exe  -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string in;
    cin>>in;
    char c = in[0];
    unsigned count = 0;
    unsigned max_count = 0;

    for (char i : in){
        if(i == c)
            count++;
        else{
            c = i;
            if(count > max_count)
                max_count = count;
            count = 1;
        }
    }
    if(count > max_count)
            max_count = count;

    cout<<max_count;
    return 0;
}