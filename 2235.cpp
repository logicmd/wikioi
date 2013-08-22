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
    int a,b,c;
    cin >> a >> b;
    c = a*b;
    int d=c%100;
    if(d>=50)   c=(c-d+100)/10;
    else    c=(c-d)/10;
    cout << c;
    return 0;
}
