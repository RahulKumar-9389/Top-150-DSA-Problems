#include <iostream>
using namespace std;

bool isSubsequce(string s, string t)
{

    int n = s.length();
    int m = t.length();

    if (n > m)
    {
        return false;
    }

    int p1 = 0;
    int p2 = 0;

    while (p1 < n && p2 < m)
    {
        if (s[p1] == t[p2])
        {
            p1++;
            p2++;
        }
        else
        {
            p2++;
        }
    }

    if (p1 < n)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    string s = "xyz";
    string t = "ahbgdc";

    if(isSubsequce(s, t)){
        cout<<"Is a subsequence!!";
    }else{
        cout<<"Not a subsequece!!";
    }
    return 0;
}