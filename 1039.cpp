//    1 2 3 4 5 6 7
//1   1 1 1 1 1 1 1
//2     1 1 2 2 3 3
//3       1 1 3

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
    int n;
    cin >> n;
    int k;
    cin >> k;

    int dp[K][N];

    for(int i=1; i<=k; i++) {
        for(int j=i; j<=n; j++) {
            if(i==1) {
                dp[i][j]=1;
                continue;
            }
            if(j==i) {
                dp[i][j]=1;
                continue;
            }
            int re=0;
            for(int ii=1; ii<=i/2; ii++) {
                for(int jj=1; jj<=j/2; jj++) {
                    re+=dp[ii][jj]*dp[i-ii][j-jj];
                }
            }
            dp[i][j]=re;
        }
    }

    cout << dp[k][n] << endl;
    return 0;
}
