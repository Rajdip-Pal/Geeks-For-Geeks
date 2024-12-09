//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    vector<vector<int>> insertInterval(vector<vector<int>> &intervals, const vector<int> &newInterval)
    {
        const int n = intervals.size();
        vector<vector<int>> result;

        for (int i = 0; i < intervals.size(); i++)
            if (intervals.at(i).front() > newInterval.front())
            {
                intervals.insert(intervals.begin() + i, newInterval);
                break;
            }

        if (intervals.size() == n)
            intervals.push_back(newInterval);

        result.push_back(intervals.front());
        for (int i = 1; i < intervals.size(); i++)
            if (intervals.at(i).front() <= result.back().back())
                result.back().back() = max(result.back().back(), intervals.at(i).back());
            else
                result.push_back(intervals.at(i));

        return result;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<vector<int>> intervals(N, vector<int>(2));
        for (int i = 0; i < N; i++)
        {
            cin >> intervals[i][0] >> intervals[i][1];
        }
        vector<int> newInterval(2);
        cin >> newInterval[0] >> newInterval[1];

        Solution obj;
        vector<vector<int>> ans = obj.insertInterval(intervals, newInterval);
        cout << "[";
        for (int i = 0; i < ans.size(); i++)
        {
            cout << "[" << ans[i][0] << ',' << ans[i][1] << ']';
            if (i != (ans.size() - 1))
                cout << ",";
        }
        cout << "]" << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
