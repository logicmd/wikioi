#include <cassert>
#include <iostream>
#include <vector>
#include <stack>
#include <cstdio>
#include <string>
#include <queue>
#include <algorithm>

using namespace std;

struct Node
{
    int sum;
    int j;
    Node(int s, int jj) {
        sum = s;
        j = jj;
    }
};


struct cmp
{
    bool operator() (const Node &x, const Node &y) {
        return x.sum>y.sum;
    }
};

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

    sort(a, a+n);
    sort(b, b+n);

    priority_queue<Node, vector<Node>, cmp> q;

    for(int i=0; i<n; i++) {
        q.push(Node(a[i]+b[0], 0));
    }

    for(int i=0; i<n; i++) {
        Node cur = q.top();
        cout << cur.sum;
        if(i<n-1)
            cout << " ";
        q.pop();
        Node newnode(cur.sum-b[cur.j]+b[cur.j+1], cur.j+1);
        q.push(newnode);
    }

    // for(int i=0; i<n; i++) {
    //     cout << q.top().sum;
    //     q.pop();
    //     if(i<n-1)
    //         cout << " ";
    //}




    return 0;
}
