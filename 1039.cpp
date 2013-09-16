//    1 2 3 4 5 6 7
//1   1 1 1 1 1 1 1
//2     1 1 2 2 3 3
//3       1 1 1

#include <cassert>
#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <set>
#include <algorithm>

#define N 201
#define K 7

using namespace std;


int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    if (n==0 || k==0) {
        cout << 0;
        return 0;
    }

    int dp[K][N];

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i&&j<=k; j++) {
            if(j==1) {
                dp[i][j]=1;
                continue;
            }
            if(j==i) {
                dp[i][j]=1;
                continue;
            }
            dp[i][j]=0;
            int kk=i-j;
            for(int jj=1; jj<=kk; jj++) {
                dp[i][j]+=dp[kk][jj];
            }
            //cout << "dp[" << i << "][" << j << "]=" << dp[i][j] << endl;
        }
    }

    cout << dp[n][k] << endl;
    return 0;
}