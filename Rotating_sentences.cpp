#include <bits/stdc++.h>
using namespace std;
int main()
{
    int long_sentence = 0;
    string s;
    vector<string> sentence;

    while (getline(cin, s)) {
        sentence.push_back(s);
        int current_sentence_size = s.size();
        if (current_sentence_size > long_sentence) {
            long_sentence = current_sentence_size;
        }
    }
    int number_of_sentence = sentence.size();
    for (int i = 0; i < long_sentence; i++) {
        for (int j = number_of_sentence - 1; j >= 0; j--) {
            if (sentence[j].size() > i) {
              // cout<<sentence[j].size()<<endl;
                cout << sentence[j][i];
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
