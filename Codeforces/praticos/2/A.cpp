//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//https://thispointer.com/find-and-replace-all-occurrences-of-a-sub-string-in-c/
bool findAndReplaceAll(std::string & data, std::string toSearch, std::string replaceStr)
{
    bool found = false;
    // Get the first occurrence
    size_t pos = data.find(toSearch);
    // Repeat till end is reached
    while( pos != std::string::npos)
    {
        found = true;
        // Replace this occurrence of Sub String
        data.replace(pos, toSearch.size(), replaceStr);
        // Get the next occurrence from the current position
        pos =data.find(toSearch, pos + replaceStr.size());
    }
    return found;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s2;
    cin>>s2;

    string s;
    while(findAndReplaceAll(s, "++", "") || findAndReplaceAll(s, "--", ""));
    if(s.length())
        cout<<"No";
    else
        cout<<"Yes";
    return 0;
}