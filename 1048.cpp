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
    int *w=new int[n];
    int *r=new int[n-1];
    for(int i=0; i<n; i++) {
        cin >> w[i];
    }
    sort(w, w+n);
    r[0]=w[0];
    int re=0;
    for(int i=1; i<n; i++) {
        r[i]=r[i-1]+w[i];
        re+=r[i];
    }
    cout << re;
    return 0;
}
