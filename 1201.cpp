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
    int max, min;
    bool f=true;
    while(n--) {
        int a;
        cin >> a;
        if(f) {
            max=a;
            min=a;
            f=false;
        }
        if(a>max)   max=a;
        if(a<min)   min=a;
    }
    cout << min << " " << max;
    return 0;
}
