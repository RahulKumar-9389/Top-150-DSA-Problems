#include <iostream>
#include <unordered_set>

using namespace std;

int lengthOfLongestSubstring(string str){
    int n = str.length();
    unordered_set<char> s;

    int ans = 0;  // Should start from 0, not -1
    int left = 0;

    for(int right = 0; right < n; right++){
        while(s.find(str[right]) != s.end()){
            s.erase(str[left]);
            left++;
        }
        s.insert(str[right]);
        ans = max(ans, right - left + 1);
    }

    return ans;
}

int main(){
    string s = "pwwkewxpw";
    cout << lengthOfLongestSubstring(s) << endl;
    return 0;
}
