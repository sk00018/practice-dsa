#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<int, string> mp;

    mp.insert({101, "sumit"});
    mp.insert({101, "raunak"});
    mp.insert({102, "Raj"});

    cout << "All Entries:\n";

    for(auto x : mp)
    {
        cout << x.first << " -> " << x.second << endl;
    }

    cout << "\nCount of key 101 = " << mp.count(101) << endl;

    auto start = mp.lower_bound(101);
    auto end = mp.upper_bound(101);

    cout << "\nValues of key 101:\n";

    for(auto it = start; it != end; it++)
    {
        cout << it->second << endl;
    }

    return 0;
}