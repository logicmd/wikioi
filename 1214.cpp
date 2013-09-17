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
    dp[0]=1;
    for(int i=0; i<n; i++) {
        int tmp=0;
        int mmax=0;
        for(int j=0; j<i; j++) {
            if(ll[i].l>=ll[j].r) {
                tmp=dp[j]+1;
            }
            if(tmp>mmax)
                mmax=tmp;
        }
        dp[i]=mmax;

        //cout << ll[i].l  << " " << ll[i].r << endl;
    }
    cout << dp[n-1];
    return 0;
}
