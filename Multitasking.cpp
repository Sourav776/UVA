#include<bits/stdc++.h>
using namespace std;
bool isVisited[1000005];
int main ()
{
    int n, m;
    int LIMIT = 1000000;

    while ( scanf ("%d %d", &n, &m) != EOF ) {

        if ( m == 0 && n == 0 ) break;

        memset(isVisited,0,sizeof(isVisited));
        bool conflict = false;

        for ( int i = 0; i < n; i++ ) {
            int a, b; scanf ("%d %d", &a, &b);

            if ( !conflict )
                for ( int j = a + 1; j <= b; j++ ) {
                    if ( isVisited [j] ) { conflict = true; break; }
                    else isVisited [j] = true;
                }
        }

        for ( int i = 0; i < m; i++ ) {
            int a, b, c; scanf ("%d %d %d", &a, &b, &c);
            int newStart = a;
            int newEnd = b;

            if (!conflict)
                while (newStart <= LIMIT) {
                    for ( int j = newStart + 1; j <= min (newEnd, LIMIT); j++ ) {
                        if ( isVisited [j] ) { conflict = true; break; }
                        else isVisited [j] = true;
                    }

                    newStart += c;
                    newEnd += c;
                }
        }

        if ( conflict ) printf ("CONFLICT\n");
        else printf ("NO CONFLICT\n");
    }
    return 0;
}
