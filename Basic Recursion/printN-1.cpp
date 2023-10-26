#include <bits/stdc++.h>
using namespace std;

void printNtoOne(int n){
    if(n==0)return;
    cout<<n<<" ";
    printNtoOne(n-1);
}

int main(){
    printNtoOne(5);
    return 0;
}