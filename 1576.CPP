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
    int *a = new int[n];
    int *dp = new int[n];

    for(int i=0; i<n; i++) {
        cin >> a[i];
        dp[i]=0;
    }

    dp[0] = a[0];
    for(int i=1; i<n; i++) {
        int max_j=0;
        for(int j=0; j<i; j++) {
            if(a[i]>a[j]) {
                max_j = max(max_j, dp[j]);
            }
        }
        dp[i] = max_j + 1;
        //cout << dp[i-1] << endl;
    }

    cout << dp[n-1];
    return 0;
}