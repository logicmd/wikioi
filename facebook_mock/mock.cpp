#include <iostream>
#include <vector>
#include <cstring>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;


char *strcpy(char *dest, const char *src) {
    if(src==NULL || dest==NULL) return NULL;
    int dest_size = strlen(dest);
    int src_size = strlen(src);

    char *res = dest;
    for(int i=0; i<min(dest_size, src_size); i++) {
        *dest = *src;
        dest++; src++;
    }

    if(dest_size>src_size)
        *dest = '\0';

    // if src str size is longer than dest str size
    // we truncate src str into dest str

    return res;
}

int FindMedian(int *A, int size_A, int *B, int size_B) {

}

int main() {
    return 0;
}
