//{ Driver Code Starts
// Initial Template for C++

// {Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// } Driver Code Ends

class Solution
{
public:
    int dataTypeSize(const string &str)
    {
        if (str == "Character")
            return 1;
        else if (str == "Integer" or str == "Float")
            return 4;
        else
            return 8;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
