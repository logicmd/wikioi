#include <cassert>
#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

bool dp[30][20000];


int main() {
    int v;
    cin >> v;
    int n;
    cin >> n;
    //int **dp =new int[n];
    vector<int> th;
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        th.push_back(a);
    }

    //sort(th.begin(), th.end());
    for(int i=0; i<n+1; i++) {
        dp[i][0]=true;
    }

    // for(int j=0; j<v+1; j++) {
    //     dp[0][j]=0;
    // }

    for(int i=0; i<n; i++) {
        for(int j=0; j<v; j++) {
            dp[i+1][j+1]=false;
            if(j+1-th[i]>=0)
                dp[i+1][j+1]=dp[i][j+1]||dp[i+1][j+1-th[i]];
            else
                dp[i+1][j+1]=dp[i][j+1];
        }
    }

    int maxv=0;
    for(int j=v; j>=0; j--) {
        if(dp[n][j]) {
            maxv=j;
            break;
        }

    }

    cout << v-maxv;
    return 0;

}
