#include <stdio.h>
#include <stdint.h>
#include <vector>
using namespace std;
int answer[1600];
int min(int a,int b,int c){
    if(a<=b && a<=c)
        return a;
    else if(b<=a && b<=c)
        return b;
    return c;
}
int main()
{
    int i2,i3,i5;
    i2=i3=i5=0;
    answer[0] = 1;
    int next2 = 2,next3 = 3,next5 = 5;
    int res;
    for(int i=1;i<=1499;i++){
        res = min(next2,next3,next5);
        answer[i] = res;
        if(res == next2){
            i2++;
            next2 = answer[i2]*2;}
        if(res == next3){
            i3++;
            next3 = answer[i3]*3;}
        if(res == next5){
            i5++;
            next5 = answer[i5]*5;}
    }
    printf("The 1500'th ugly number is %d.\n",res );
    return 0;
}
