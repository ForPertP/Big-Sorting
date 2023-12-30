#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'bigSorting' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts STRING_ARRAY unsorted as parameter.
 */

vector<string> bigSorting(vector<string> unsorted)
{
    sort(unsorted.begin(),unsorted.end(),
        [](const string &i, const string &j) -> bool
        {
            int n = i.length();
            int m = j.length();
            if (n == m)
            {
               return (i < j);
            }
            
            return n < m;
        }
    );
    
    return unsorted;
}
