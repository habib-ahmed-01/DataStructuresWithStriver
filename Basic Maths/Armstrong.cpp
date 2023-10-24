#include <bits/stdc++.h>
using namespace std;

int Armstrong(int num){
    int count = 0;
    int copy = num;
    int orgNum = num;
    while(num>0){
        num = num/10;
        count++;
    }
    int sumofDigits = 0;
    while(copy>0){
        int rem = copy%10;
        sumofDigits = sumofDigits+pow(rem, count);
        copy = copy/10;
    }
    return (orgNum==sumofDigits);
}

int main(){
    int n = 152;
    cout<<Armstrong(n);
    return 0;
}