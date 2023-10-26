#include <bits/stdc++.h>
using namespace std;

// bool isPalindrome = true;

bool checkPalindrome(string a, int start, int end)
{
    if ((start >= end))
    {
        return true;
    }

    if(a[start] != a[end]){
        return false;
    }
    return checkPalindrome(a, start + 1, end - 1);
}

int main()
{
    string a = "ha";

    if (checkPalindrome(a, 0, a.length() - 1))
    {
        cout << "Palindrome"
             << " ";
    }
    else
        cout << "Not Palindrome"
             << " ";
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// bool checkPalindrome(string a, int start, int end){
//     if (start >= end) {
//         return true; // The substring is a palindrome
//     }

//     if (a[start] != a[end]) {
//         return false; // The current characters do not match
//     }

//     return checkPalindrome(a, start + 1, end - 1);
// }

// int main(){
//     string a = "hah";
//     if(checkPalindrome(a, 0, a.length() - 1)){
//         cout << "Palindrome" << " ";
//     } else {
//         cout << "Not Palindrome" << " ";
//     }
//     return 0;
// }
