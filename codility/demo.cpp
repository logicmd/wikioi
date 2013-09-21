// you can also use includes, for example:
// #include <algorithm>
int solution(const vector<int> &A) {
    int N=A.size();
    long long left = 0, right = 0;
    for(int i=0; i<N-1; i++) {
        left += A[i];
    }

    if(left==right) {
        return N-1;
    }

    for(int j=N-2; j>=0; j--) {


        left-=A[j];
        right+=A[j+1];

        if(left==right) {
            return j;
        }
    }

    return -1;


}