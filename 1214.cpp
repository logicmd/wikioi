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
    int l;
    int r;
    line() {
        l=0;
        r=0;
    }
};

int cmp(line x, line y) {
    return x.r<y.r;
}

int main() {
    int n;
    cin >> n;
    line *ll = new line[n];
    for(int i=0; i<n; i++) {
        int a, b;
        cin >> a >> b;
        ll[i].l = min(a,b);
        ll[i].r = max(a,b);
        //cin >> ll[i].l >> ll[i].r;
    }

    sort(ll, ll+n, cmp);

    int *dp = new int[n];
    int *mmax = new int[n];
    dp[0]=1; mmax[0]=1;
    for(int i=0; i<n; i++) {
        /*if(ll[i].l>=ll[i-1].r) {
            dp[i]=mmax[i-1]+1;
            mmax[i]=dp[i];
        } else {
            mmax[i]=mmax[i-1];
        }*/
        cout << ll[i].l  << " " << ll[i].r << endl;
    }
    cout << mmax[n-1];
    return 0;
}
