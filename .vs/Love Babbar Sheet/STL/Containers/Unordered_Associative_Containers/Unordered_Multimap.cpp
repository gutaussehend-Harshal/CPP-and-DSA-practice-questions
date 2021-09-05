// unordered_multimap and its application -->
#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("CLS");
    unordered_multimap<string, int> umm1;

    unordered_multimap<string, int> umm2({{"apple", 1}, {"ball", 2}, {"apple", 10}, {"cat", 7}, {"dog", 9}, {"cat", 6}, {"apple", 1}});

    // Initialization by assignment operation
    umm1 = umm2;
    for (auto value : umm1)
    {
        cout << value.first << " " << value.second << endl;
    }

    // empty returns true, if container is empty else it
    // returns false
    if (umm2.empty())
        cout << "unordered multimap 2 is empty\n";
    else
        cout << "unordered multimap 2 is not empty\n";

    // size returns total number of elements in container
    cout << "Size of unordered multimap 1 is " << umm1.size() << endl;
    cout << "Size of unordered multimap 2 is " << umm2.size() << endl;

    string key = "apple";
    unordered_multimap<string, int>::iterator itr;
    if (umm1.find(key) != umm1.end())
    {
        cout << "key " << key << " is there in unordered multimap 1\n";
    }
    else
    {
        cout << "key " << key << " is not there in unordered multimap 1\n";
    }

    // count returns count of total number of pair
    // associated with key
    int cnt = umm1.count(key);
    cout << "total values associated with " << key << " are " << cnt << "\n";

    for (auto value : umm2)
    {
        cout << value.first << " " << value.second << endl;
    }

    // one insertion by makeing pair explicitly
    umm2.insert(make_pair("dog", 11));
    // insertion by initializer list
    umm2.insert({{"alpha", 12}, {"beta", 33}});
    cout << "\nAfter insertion of <apple, 12> and <beta, "
            "33>\n\n";
    for (auto value : umm2)
    {
        cout << value.first << " " << value.second << endl;
    }

    // erase deletes all pairs corresponding to key
    umm2.erase("apple");
    cout << "\nAfter deletion of apple\n";
    for (auto value : umm2)
    {
        cout << value.first << " " << value.second << endl;
    }

    // clear deletes all pairs from container
    umm1.clear();
    umm2.clear();

    if (umm2.empty())
        cout << "\nunordered multimap 2 is empty\n";
    else
        cout << "\nunordered multimap 2 is not empty\n";
    return 0;
}