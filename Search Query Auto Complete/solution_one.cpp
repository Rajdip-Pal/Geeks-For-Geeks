//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// Incomplete;

class AutoCompleteSystem
{
    array<vector<pair<int, string>>, 26> data;

public:
    AutoCompleteSystem(vector<string> &sentences, vector<int> &times)
    {
        for (int i = 0; i < sentences.size(); i++)
            data[sentences.at(i).front() - 'a'].push_back({times[i], sentences[i]});
    }

    vector<string> input(char c)
    {
        vector<string> ans;
        if (c - 'a' > 0 and c - 'a' < 26)
        {
            auto it = data[c - 'a'].cbegin();
            for (int i = 0; i < 3; i++)
                ans.push_back(it->second), it++;
        }
        return ans;
    }
};

/**
 * Your AutoCompleteSystem object will be instantiated and called as such:
 * AutoCompleteSystem* obj = new AutoCompleteSystem(sentences, times);
 * vector<string> param_1 = obj->input(c);
 */

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        vector<string> sentences(n);
        vector<int> times(n);
        for (int i = 0; i < n; ++i)
        {

            getline(cin, sentences[i]);
            cin >> times[i];
            cin.ignore();
        }
        AutoCompleteSystem *obj = new AutoCompleteSystem(sentences, times);
        int q;
        cin >> q;
        cin.ignore();

        for (int i = 0; i < q; ++i)
        {
            string query;
            getline(cin, query);
            string qq = "";
            for (auto &x : query)
            {
                qq += x;
                vector<string> suggestions = obj->input(x);
                if (x == '#')
                    continue;
                cout << "Typed : \"" << qq << "\" , Suggestions: \n";
                for (auto &y : suggestions)
                {
                    cout << y << "\n";
                }
            }
        }
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
