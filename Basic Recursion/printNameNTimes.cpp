#include <bits/stdc++.h>
using namespace std;

void printName(int n, string name){
    if(n==0) return;
    cout<<name<<endl;
    printName(n-1, name);
}

int main(){
    printName(10, "H");
    return 0;
}