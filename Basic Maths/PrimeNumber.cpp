#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    for(int i=2;i<sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    cout<<isPrime(29);
    return 0;
}