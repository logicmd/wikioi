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
    set<int> st;
    for(int i=0; i<n; i++) {
        int v;
        cin >> v;
        st.insert(v);
    }

    cout << st.size() << endl;
    for(set<int>::iterator it=st.begin(); it!=st.end(); it++) {
        cout << *it;
        if((it+1)!=st.end()) cout << " ";
    }

    return 0;
}