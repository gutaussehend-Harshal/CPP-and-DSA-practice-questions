#include <bits/stdc++.h>
using namespace std;

class Outscal
{
public:
    int commonPrefix(vector<int> height)
    {
        //Write your code here

        stack<int> s;

        int max_area = 0;
        int top;            
        int area_with_top; 

        int i = 0;
        while (i < height.size())
        {
            // If this bar is higher than the bar on top stack, push it to stack
            if (s.empty() || height[s.top()] <= height[i])
                s.push(i++);

            // If this bar is lower than top of stack, then calculate area of rectangle with stack top as the smallest (or minimum height) bar.
            else
            {
                top = s.top(); 
                s.pop();      

                area_with_top = height[top] * (s.empty() ? i : i - s.top() - 1);

                if (max_area < area_with_top)
                    max_area = area_with_top;
            }
        }

        while (s.empty() == false)
        {
            top = s.top();
            s.pop();
            area_with_top = height[top] * (s.empty() ? i : i - s.top() - 1);

            if (max_area < area_with_top)
                max_area = area_with_top;
        }

        return max_area;
    }
};

int main()
{
    int m, temp;
    vector<int> brr;
    cin >> m;
    while (m)
    {
        cin >> temp;
        brr.push_back(temp);
        m--;
    }
    class Outscal s;
    int ans = s.commonPrefix(brr);
    cout << ans;
    return (0);
}
