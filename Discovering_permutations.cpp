#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int N, K;
void recur(int length,int used[], string str){

    if( K == 0 ) return;

    if( length == N ){
        cout << str << endl;
        K--;
        return;
    }

    for(int i = 0; i < N; i++){
        if(!used[i]){
            string temp = str;
            temp +=  (char)(i+'A');
            used[i] = 1;
            recur(length+1, used, temp);
            used[i] = 0;

        }
    }
}


int main(){
    int T;
    cin >> T;
    for(int c = 1; c <= T; c++){
        cin >> N >> K;
        int used[28];
        for(int j = 0; j < N; j++)
            used[j] = 0;
        cout << "Case " << c << ":" << endl;
        recur(0,used,"");
    }
    return 0;
}
