#include <cassert>
#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    string s;
    vector<string> v;
    while(cin>>s) {
        v.push_back(s);
    }
    for(int i=v.size()-1; i>=0; i--) {
        cout << v[i];
        if(i!=0) cout << " ";
    }

    return 0;
}