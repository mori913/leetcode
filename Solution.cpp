#include "stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> relationships(n);
    for (int i = 0; i < n; i++)
    {
        cin >> relationships[i];
    }
    cout << n;
    for (int i = 0; i < n; i++)
    {
        cout << relationships[i];
    }
    vector<int> importances(n, 0);
    for (int i = 0; i < n; i++)
    {
        int pointer = i;
        while (relationships[i] != -1)
        {
            importances[relationships[i]]++;
            pointer = relationships[pointer];
        }
    }
    vector<vector<int>> results(n);
    for (int i = 0; i < n; i++)
    {
        results[i] = vector<int>{i, importances[i]};
    }
    // sort(results.begin(), results.end(), [](vector<int, int> &a, vector<int, int> &b)
    //      {
    //     if (a[1] != b[1])
    //     {
    //         return a[1] > b[1];
    //     }
    //     else
    //     {
    //         return a[0] < b[0];
    //     } });
    for (size_t i = 0; i < n; i++)
    {
        cout << results[i][0] << " ";
    }

    return 0;
}