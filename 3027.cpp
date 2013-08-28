#include <cassert>
#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <set>
#include <algorithm>

using namespace std;


struct line {
    int x;
    int y;
    int w;
};

bool compare(line a, line b) {
    return a.y < b.y;
}

int main() {
    int n;
    cin >> n;
    line *l = new line[n];
    int *dp = new int[n];

    for(int i=0; i<n; i++) {
        cin >> l[i].x >> l[i].y >> l[i].w;
        dp[i]=0;
    }

    sort(l,l+n,compare);


    dp[0] = l[0].w;
    for(int i=1; i<n; i++) {
        int max_j=0;
        for(int j=0; j<i; j++) {
            if(l[j].y<=l[i].x) {
                max_j = max(max_j, dp[j]);
            }
        }
        dp[i] = max_j + l[i].w;
        //cout << dp[i-1] << endl;
    }

    cout << dp[n-1];
    return 0;
}