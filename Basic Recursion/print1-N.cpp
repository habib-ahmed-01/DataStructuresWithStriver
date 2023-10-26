#include <bits/stdc++.h>
using namespace std;

int global=1;

void printOnetoN(int n){
    if(global>n) return;
    cout<<global<<" ";
    global++;
    return printOnetoN(n);
}

int main(){
    printOnetoN(5);
    return 0;
}