#include <bits/stdc++.h>
using namespace std;

// void printEncodedMessage(stack<char> message)
// {
//     while (!message.empty())
//     {
//         cout << message.top() << " ";
//         message.pop();
//     }
// }

bool messageCanBeSent(string s)
{
    int n = s.size();
    stack<char> message;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '-')
        {
            message.push(s[i]);
        }
        else if (s[i] == '.')
        {
            if (!message.empty() && message.top())
            {
                message.pop();
            }
            else
            {
                return false;
                break;
            }
        }
    }

    if (!message.empty())
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()

{
    system("CLS");
    // stack<char> encodedMessage;
    string s = "----....";
    // encodedMessage.push('.');
    // encodedMessage.push('-');
    // encodedMessage.push('.');
    // encodedMessage.push('-');
    // encodedMessage.push('.');
    // encodedMessage.push('-');
    // encodedMessage.push('.');
    // encodedMessage.push('-');

    // cout << "The size of encoded message is: " << encodedMessage.size() << endl;
    // if (encodedMessage.empty())
    // {
    //     cout << "Stack is empty" << endl;
    // }
    // else
    // {
    //     cout << "stack is  not empty" << endl;
    // }

    // printEncodedMessage(encodedMessage);
    // cout << endl;
    // balanceMessage(encodedMessage);

    if (messageCanBeSent(s))
    {
        cout << "Message can be sent to Mayank" << endl;
    }
    else
    {
        cout << "Message can not be sent to Mayank" << endl;
    }
    return 0;
}