//g++ werdAlgorithm.cpp -o main.exe  -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self
#include <bits/stdc++.h>
using namespace std;
int main(){
    long unsigned int n;
    map<int,bool> values;
    scanf("%lu", &n);
    values.emplace(n, true);
    string s = to_string(n);
    while(true){
        if(n % 2)
            n = 3*n+1;
        else
            n>>=1;
        if(values.find(n) != values.end())
            break;
        values.emplace(n,true);
        s += " "+ to_string(n);
    }
    printf("%s", s.c_str());
    return 0;
}