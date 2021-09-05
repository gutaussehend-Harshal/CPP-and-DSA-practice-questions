#include <bits/stdc++.h>
using namespace std;

// Abstraction -->

class Smartphone
{
public:
    virtual void TakeSelfie() = 0;
    virtual void MakeACall() = 0;
};

class Android : public Smartphone
{
    void TakeSelfie()
    {
        cout << "Android selfie" << endl;
    }

    void MakeACall()
    {
        cout << "Android calling..." << endl;
    }
};

class Iphone : public Smartphone
{
    void TakeSelfie()
    {
        cout << "Iphone selfie" << endl;
    }

    void MakeACall()
    {
        cout << "Iphone calling..." << endl;
    }
};

int main()
{
    system("CLS");
    Smartphone *s1 = new Iphone();
    s1->TakeSelfie();
    s1->MakeACall();
    return 0;
}