#include <bits/stdc++.h>
using namespace std;

// What is inheritance -->

class YouTubeChannel
{
private:
    string Name;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

protected:
    string OwnerName;

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

class CookingYoutubeChannel : public YouTubeChannel
{
public:
    CookingYoutubeChannel(string name, string ownerName) : YouTubeChannel(name, ownerName)
    {
    }

    void Practice()
    {
        cout << OwnerName << " is Practicing cooking, learning new recipes, experimenting with spices..." << endl;
    }
};

int main()
{
    system("CLS");
    CookingYoutubeChannel CookingYtChannel("Amy's kitchen", "Amy");
    CookingYoutubeChannel CookingYtChannel2("John's kitchen", "John");
    // CookingYtChannel.PublishVideo("Apple pie");
    // CookingYtChannel.PublishVideo("Chocolate cake");
    // CookingYtChannel.Subscribe();
    // CookingYtChannel.Subscribe();
    // CookingYtChannel.GetInfo();
    CookingYtChannel.Practice();
    CookingYtChannel2.Practice();

    return 0;
}