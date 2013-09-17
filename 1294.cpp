#include <cassert>
#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <set>
#include <algorithm>

using namespace std;


void dfs(int n, vector<int> &cur, vector<vector<int> > &res, bool f[]) {
    if(cur.size()>=n) {
        res.push_back(cur);
        return;
    }

    for(int i=0; i<n; i++) {
        if(f[i]) {
            f[i]=false;
            cur.push_back(i+1);
            dfs(n, cur, res, f);
            cur.pop_back();
            f[i]=true;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> cur;
    vector<vector<int> > res;

    bool *f=new bool[n];
    for(int i=0; i<n; i++) {
        f[i]=true;
    }

    dfs(n, cur, res, f);
    for(int i=0; i<res.size(); i++) {
        for(int j=0; j<res[i].size(); j++) {
            cout << res[i][j];
            if(j+1<res[i].size())
                cout << " ";
        }
        if(i+1<res.size())
            cout << endl;
    }

    return 0;
}

