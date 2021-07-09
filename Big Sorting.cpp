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
