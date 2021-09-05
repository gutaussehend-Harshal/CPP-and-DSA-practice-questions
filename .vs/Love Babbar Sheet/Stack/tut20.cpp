#include <bits/stdc++.h>
using namespace std;

class Outscal
{
private:
    //Write Your Code Here (Define your data structure)
    stack<int> s;
    int top; // Index inside the array - 0th position
    int minEle;

public:
    Outscal()
    {
        top = -1;
    }
    void push(int x)
    {
        // Insert new number into the stack
        if (s.empty())
        {
            minEle = x;
            s.push(x);
            cout << "Number Inserted: " << x << endl;
            return;
        }

        // If new number is less than minEle
        if (x < minEle)
        {
            s.push(2 * x - minEle);
            minEle = x;
        }

        else
            s.push(x);

        cout << "Number Inserted: " << x << endl;
    }
    void pop()
    {
        if (s.empty())
        {
            cout << "Stack is empty" << endl;
            return;
        }

        cout << "Top Most Element Removed: ";
        int y = s.top();
        s.pop();

        // Minimum will change as the minimum element of the stack is being removed.
        if (y < minEle)
        {
            cout << minEle << endl;
            minEle = 2 * minEle - y;
        }

        else
            cout << y << endl;
    }

    int peek()
    {
        if (s.empty())
        {
            cout << "Stack is empty ";
            return;
        }

        int t = s.top(); // Top element.

        cout << "Top Most Element is: ";

        // If t < minEle means minEle stores value of t.
        if (t < minEle)
        {
            return minEle;
        }
        else
        {
            return t;
        }
    }
    int getMin()
    {
        if (s.empty())
            cout << "Stack is empty\n";

        // variable minEle stores the minimum element in the stack.
        else
            cout << "Minimum Element in the stack is: " << minEle << "\n";
    }
};

int main()
{
    int n, temp, insert, ans;
    cin >> n;
    class Outscal s;
    while (n)
    {
        cin >> temp;
        if (temp == 1)
        {
            cin >> insert;
            s.push(insert);
        }
        else if (temp == 2)
            s.pop();
        else if (temp == 3)
        {
            ans = s.peek();
            cout << ans << " ";
        }
        else if (temp == 4)
        {
            ans = s.getMin();
            cout << ans << " ";
        }
        n--;
    }
}