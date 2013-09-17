#include <cassert>
#include <iostream>
#include <vector>
#include <stack>
#include <cstdio>
#include <string>
#include <queue>
#include <algorithm>

using namespace std;


int main() {
    int n;
    cin >> n;
    int *a = new int[n];
    int *b = new int[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    for(int i=0; i<n; i++) {
        cin >> b[i];
    }

    priority_queue<int> q;
    int counter=0;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            int c=a[i]+b[j];
            counter++;
            if(counter<=n) {
                q.push(c);
            } else {
                if(c<q.top()) {
                    q.pop();
                    q.push(c);
                }
            }
        }
    }

    stack<int> st;

    for(int i=0; i<n; i++) {
        st.push(q.top());
        q.pop();

    }

    for(int i=0; i<n; i++) {
        cout << st.top();
        st.pop();
        if(i<n-1)
            cout << " ";
    }

    return 0;
}
