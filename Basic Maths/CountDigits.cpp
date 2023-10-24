#include <bits/stdc++.h>
using namespace std;

// Good
int CountDigits(int num){
    int count = 0;

    while(num>0){
        num = num/10;
        count++;
    }

    return count;
}

// Best
int CountDigits_2(int num){
    int count = floor(log10(num)+1);
    return count;
}

int main(){
    int n = 12365;
    cout<<CountDigits(n)<<endl;
    cout<<CountDigits_2(n)<<endl;
    return 0;
}