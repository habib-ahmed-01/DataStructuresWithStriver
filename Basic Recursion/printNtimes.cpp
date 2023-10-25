#include <bits/stdc++.h>
using namespace std;

// 10 9 8 7 6 5 4 3 2 1
void printNtimesReverse(int num){
    if(num==0){
        return;
    }
    cout<<num<<" ";

    return printNtimesReverse(num-1);
}

// 1 2 3 4 5 6 7 8 9 10
void printNtimes(int num){
    if(num>10) return;
    cout<<num<<" ";
    return printNtimes(num+1);
}

int main(){
    int n = 1;
    int x = 10;
    printNtimesReverse(x);
    printNtimes(n);
    return 0;
}