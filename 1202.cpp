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
    int sum;
    bool f=true;
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        sum+=a;
    }
    cout << sum;
    return 0;
}
