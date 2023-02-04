//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long n;
    cin>>n;
    list<long> nums;
    long temp;
    for (long i = 0; i < n; i++){
        cin>>temp;
        nums.emplace_back(temp);
    }
    nums.sort();
    long max = nums.back();
    long sum = 0;
    for (long l : nums){
        sum += max-l;
    }
    cout << sum;
    return 0;
}