//g++ name.cpp -o main.exe  -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self
#include <bits/stdc++.h>
using namespace std;
int main(){
    long unsigned int n;
    set<long unsigned int> ints;
    cin>>n;
    long unsigned int temp;
    for (long unsigned int i = 1; i < n; i++){
        cin>>temp;
        ints.insert(temp);
    }
    temp = 1;
    for(auto& i:ints){
        if (i != temp){
            cout<<temp;
            return 0;
        }
        temp++;
    }
    cout<<n; 
    return 0;
}