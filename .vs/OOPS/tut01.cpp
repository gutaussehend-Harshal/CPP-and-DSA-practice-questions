#include <bits/stdc++.h>
using namespace std;

// Introduction to classes & objects -->

class YouTubeChannel
{
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
};

int main()
{
    system("CLS");
    YouTubeChannel ytChannel;
    ytChannel.Name = "Code with Harry";
    ytChannel.OwnerName = "Harry";
    ytChannel.SubscribersCount = 100;
    ytChannel.PublishedVideoTitles = {"C++ full course for beginners", "Python full course for beginners"};

    cout << "Name: " << ytChannel.Name << endl;
    cout << "OwnerName: " << ytChannel.OwnerName << endl;
    cout << "SubscribersCount: " << ytChannel.SubscribersCount << endl;
    cout << "Videos: " << endl;
    for (string VideoTitle : ytChannel.PublishedVideoTitles)
    {
        cout << VideoTitle << endl;
    }

    return 0;
}