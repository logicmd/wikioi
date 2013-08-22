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
    double e=1.0/100000000;
    double a,b;
    cin >> a >> b;
    double c=a-b;
    if(c<0) c=-c;
    if(c<e) cout << "yes";
    else    cout << "no";
    return 0;
}
