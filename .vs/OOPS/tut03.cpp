#include <bits/stdc++.h>
using namespace std;

// What is encapsulation -->

class YouTubeChannel
{
private:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

public:
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

    void Subscribe()
    {
        SubscribersCount++;
    }

    void Unsubscribe()
    {
        if (SubscribersCount > 0)
        {
            SubscribersCount--;
        }
    }

    void PublishVideo(string title)
    {
        PublishedVideoTitles.push_back(title);
    }
};

int main()
{
    system("CLS");
    YouTubeChannel ytChannel("Code with Harry", "Harry");
    ytChannel.PublishVideo("C++ for bginners");
    ytChannel.PublishVideo("HTML & CSS for bginners");
    ytChannel.PublishVideo("OOP for bginners");

    // ytChannel.Subscribe();
    // ytChannel.Subscribe();
    // ytChannel.Subscribe();
    ytChannel.Unsubscribe();
    ytChannel.GetInfo();
    return 0;
}