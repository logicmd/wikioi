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
    string a, b;
    cin >> a >> b;
    int an=a.size();
    int bn=b.size();
    for(int i=0; i<an-bn+1; i++) {
        string str=a.substr(i,bn);
        if(str==b) {
            cout << i;
        }
    }
    return 0;
}