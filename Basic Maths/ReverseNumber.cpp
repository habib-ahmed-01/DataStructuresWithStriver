#include <bits/stdc++.h>
using namespace std;

int ReverseNumber(int num){
    int reversed = 0;
    while(num>0){
        int rem = num%10;
        reversed = (reversed*10)+rem;
        num = num/10;
    }

    return reversed;
}

int main(){
    int n = 123;
    cout<<ReverseNumber(n);
    return 0;
}