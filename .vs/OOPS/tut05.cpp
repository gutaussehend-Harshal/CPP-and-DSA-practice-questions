#include <bits/stdc++.h>
using namespace std;

// What is polymorphism -->

class YouTubeChannel
{
private:
    string Name;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

protected:
    string OwnerName;
    int ContentQuality;

public:
    YouTubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
        ContentQuality = 0;
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

    void CheckAnaltics()
    {
        if (ContentQuality < 5)
        {
            cout << Name << " has bad quality content" << endl;
        }
        else
        {
            cout << Name << " has great content" << endl;
        }
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
        ContentQuality++;
    }
};

class SingersYoutubeChannel : public YouTubeChannel
{
public:
    SingersYoutubeChannel(string name, string ownerName) : YouTubeChannel(name, ownerName)
    {
    }

    void Practice()
    {
        cout << OwnerName << " is taking singing classes, learning new songs, learning how to dance..." << endl;
        ContentQuality++;
    }
};

int main()
{
    system("CLS");
    CookingYoutubeChannel CookingYtChannel("Amy's kitchen", "Amy");
    SingersYoutubeChannel SingersYtChannel("Johnsings", "John");

    CookingYtChannel.Practice();
    SingersYtChannel.Practice();
    SingersYtChannel.Practice();
    SingersYtChannel.Practice();
    SingersYtChannel.Practice();
    SingersYtChannel.Practice();

    YouTubeChannel *yt1 = &CookingYtChannel;
    YouTubeChannel *yt2 = &SingersYtChannel;

    yt1->CheckAnaltics();
    yt2->CheckAnaltics();

    return 0;
}