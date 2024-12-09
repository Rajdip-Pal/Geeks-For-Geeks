//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    string compareNM(const int &n, const int &m)
    {
        return (n >= m) ? (n == m) ? "equal" : "greater" : "lesser";
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        Solution obj;
        cout << obj.compareNM(n, m) << "\n";

        cout << "~" << "\n";
    }
    return 0;
}
// } Driver Code Ends
