#include <iostream>
using namespace std;


bool isPalindrome(string str){

    int left = 0;
    int right = str.length() - 1;

    while(left <= right){

        if(!isalnum(str[left])){
            left++;
            continue;
        }

        if(!isalnum(str[right])){
            right--;
            continue;
        }

        if(tolower(str[left]) != tolower(str[right])){
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main(){

    string str = "A man, a plan, a canal: Panama";

    if(isPalindrome(str)){
        cout<<"Given string is a valid palindrome!!";
    }else{
        cout<<"Given string is not a palindrome!!";
    }
    return 0;
}