#include <bits/stdc++.h>
using namespace std;

int BruteForce(int a, int b){
    int ans = 1;
    for (int i = 1; i <= min(a,b); i++)
    {
        if(a%1==0 && b%i==0){
            ans = i;
        }
    }
    return ans;
}

int Euclidean(int a, int b){
    if(b==0){
        return a;
    }
    return Euclidean(b, a%b);
}

int main(){

    int a = 20;
    int b = 10;
    cout<<BruteForce(a,b);
    cout<<Euclidean(a,b);
    return 0;
}