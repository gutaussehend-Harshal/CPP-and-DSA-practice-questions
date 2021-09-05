// unordered_map in C++ STL -->
#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("CLS");
    unordered_map<string, int> umap1;
    umap1["GeeksforGeeks"] = 10;
    umap1["Practice"] = 20;
    umap1["Contribute"] = 30;

    for (auto value : umap1)
    {
        cout << value.first << " " << value.second << endl;
    }

    unordered_map<string, double> umap;

    // inserting values by using [] operator
    umap["PI"] = 3.14;
    umap["root2"] = 1.414;
    umap["root3"] = 1.732;
    umap["log10"] = 2.302;
    umap["loge"] = 1.0;

    // inserting value by insert function
    umap.insert(make_pair("e", 2.718));

    string key = "PI";

    // If key not found in map iterator to end is returned
    if (umap.find(key) == umap.end())
        cout << key << " not found\n";

    // If key found then iterator to that key is returned
    else
        cout << "Found " << key << "\n";

    key = "lambda";
    if (umap.find(key) == umap.end())
        cout << key << " not found\n";
    else
        cout << "Found " << key << endl;

    // iterating over all value of umap
    unordered_map<string, double>::iterator itr;
    cout << "All Elements : \n";
    for (itr = umap.begin(); itr != umap.end(); itr++)
    {
        // itr works as a pointer to pair<string, double>
        // type itr->first stores the key part  and
        // itr->second stroes the value part
        cout << itr->first << "  " << itr->second << endl;
    }
    cout << endl;

    // A practical problem based on unordered_map – given a string of words, find frequencies of individual words.
    string str = "geeks for geeks geeks quiz practice qa for";
    // declaring map of <string, int> type, each word
    // is mapped to its frequency
    unordered_map<string, int> wordFreq;

    // breaking input into word using string stream
    stringstream ss(str); // Used for breaking words
    string word;          // To store individual words
    while (ss >> word)
        wordFreq[word]++;

    // now iterating over word, freq pair and printing them in <, > format
    unordered_map<string, int>::iterator p;
    for (p = wordFreq.begin(); p != wordFreq.end(); p++)
        cout << "(" << p->first << ", " << p->second << ")\n";

    return 0;
}