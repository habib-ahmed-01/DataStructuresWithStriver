#include <bits/stdc++.h>
using namespace std;

bool Palindrome(int num){
    int reversed = 0;
    int copy = num;
    while(num>0){
        int rem = num%10;
        reversed = (reversed*10)+rem;
        num /= 10;
    }

    return (reversed == copy);
}

int main(){
    int n = 120;
    cout<<Palindrome(n);
    return 0;
}