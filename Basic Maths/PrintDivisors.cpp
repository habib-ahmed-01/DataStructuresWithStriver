#include <bits/stdc++.h>
using namespace std;

void PrintDivisors(int num){

    for(int i=1; i<=sqrt(num); i++){

        if(num%i==0){
            cout<<i<<" ";

            if(num/i!=i){ 
                cout<<(num/i)<<" ";
            }
        }
    }
}

int main(){
    PrintDivisors(36);
    return 0;
}