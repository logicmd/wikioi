#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <queue>


using namespace std;

struct Word
{
    string str;
    int c;
    Word(string s, int cc) {
        str=s;
        c=cc;
    }
};

vector<string> replace(string &src, string &p, string &q) {
    size_t i=0, j=0;
    vector<string> res;
    while(i<src.size()) {
        size_t ii=i;
        while(ii<src.size() && j<p.size() && src[ii]==p[j]) {
            ii++;
            j++;
        }
        if(j==p.size()) {
            string replaced = src.substr(0, i) + q + src.substr(i+p.size());
            res.push_back(replaced);
        }
        i++;
        j=0;
    }
    return res;

}

int main()
{
    string a, b;
    cin >> a >> b;
    queue<Word> q;
    q.push(Word(a, 0));

    map<string, string> dict;
    while(!cin.eof()) {
        string aa, bb;
        cin >> aa >> bb;
        dict.insert(make_pair(aa, bb));
    }

    while(!q.empty()) {
        Word cur = q.front();
        q.pop();
        if(cur.c>9) {
            cout << "NO ANSWER!" << endl;
            return 0;
        }

        for(map<string, string>::iterator i=dict.begin(); i!=dict.end(); i++) {
            string pp = i->first;
            string qq = i->second;
            vector<string> candidate = replace(cur.str, pp, qq);
            if(candidate.size()>0) {
                for(vector<string>::iterator word=candidate.begin();
                    word!=candidate.end(); word++) {
                    if((*word).compare(b)==0) {
                        cout << cur.c+1;
                        return 0;
                    }
                    q.push(Word((*word), cur.c+1));
                }
            }
        }
    }


    system("PAUSE");
    return 0;
}

