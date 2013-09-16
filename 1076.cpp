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
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++) {
        int vv;
        cin >> vv;
        v.insert(vv);
    }

    sort(v.begin(), v.end());

    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++) {
        cout << *it;
        if((it+1)!=v.end()) cout << " ";
    }

    return 0;
}