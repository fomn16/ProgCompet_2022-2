//g++ main.cpp -o main.exe  -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<long> nums;

long smallestMissing(int maxId){
    if(maxId == 0){
        if(nums[0] == 1)
            return 2;
        else
            return 1;
    }
    long sm = smallestMissing(maxId-1);
    if(sm < nums[maxId])
        return sm;
    return sm + nums[maxId];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long n;
    cin>>n;

    long temp;
    for (long i = 0; i < n; i++){
        cin>>temp;
        nums.emplace_back(temp);
    }

    sort(nums.begin(), nums.end());

    cout<<smallestMissing(nums.size()-1);

    return 0;
}