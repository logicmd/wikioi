// you can also use includes, for example:
#include <algorithm>
using namespace std;
//struct rec {
//    int x, y, width, height;
//    rec(int _x, int _y, int _w, int _h) {
//        x = _x;
//        y = _y;
//        width = _w;
//        height = _h;
//    }
//};

int solution(int K, int L, int M, int N, int P, int Q, int R, int S) {
    // write your code here...
    //rec r1(K, L, M-K, N-L);
    //rec r2(P, Q, R-P, S-Q);

    long long width1 = M-K;
    long long height1 = N-L;

    long long width2 = R-P;
    long long height2 = S-Q;

    long long start_x = min(K, P);//min(r1.x, r2.x);
    long long end_x = max(M, R);//max(r1.x+r1.width, r2.x+r2.width)
    long long overlap_width = width1 + width2 - (end_x - start_x);

    long long start_y = min(L, Q);//min(r1.y, r2.y);
    long long end_y = max(N, S);//max(r1.y+r1.height, r2.y+r2.height)
    long long overlap_height = height1 + height2 - (end_y - start_y);


    long long overlap_area = 0;
    long long area1 = width1*height1;
    long long area2 = width2*height2;
    if(overlap_width <= 0 || overlap_height <= 0) {
        overlap_area = 0;
    } else {
        overlap_area = overlap_width * overlap_height;
    }

    long long area = area1+area2-overlap_area;

    if(area > 2147483647) {
        return -1;
    }
    return (int)area;
}
