#include <bits/stdc++.h>
using namespace std;

// What are constructors & class methods -->

class YouTubeChannel
{
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

    YouTubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }

    void GetInfo()
    {
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "SubscribersCount: " << SubscribersCount << endl;
        cout << "Videos: " << endl;
        for (string VideoTitle : PublishedVideoTitles)
        {
            cout << VideoTitle << endl;
        }
    }
};

int main()
{
    system("CLS");
    YouTubeChannel ytChannel("Code with Harry", "Harry");
    ytChannel.PublishedVideoTitles.push_back("C++ for bginners");
    ytChannel.PublishedVideoTitles.push_back("HTML & CSS for bginners");
    ytChannel.PublishedVideoTitles.push_back("OOP for bginners");

    YouTubeChannel ytChannel2("Code with beauty", "Saldina");
    ytChannel2.PublishedVideoTitles.push_back("C++ for bginners");
    ytChannel2.PublishedVideoTitles.push_back("HTML & CSS for bginners");
    ytChannel2.PublishedVideoTitles.push_back("OOP for bginners");

   ytChannel.GetInfo();
   ytChannel2.GetInfo();

    return 0;
}