#include <bits/stdc++.h>
using namespace std;

class Outscal
{
public:
    int commonPrefix(vector<int> height)
    {
        //Write your code here
        int n = height.size(), ans = 0, i = 0;
        stack<int> st;
        while (i < n)
        {
            while (!st.empty() && height[st.top()] > height[i])
            {
                int t = st.top();
                int h = height[t];
                st.pop();

                if (st.empty())
                {
                    ans = max(ans, h * i);
                }
                else
                {
                    int len = i - st.top() - 1;
                    ans = max(ans, h * len);
                }
            }
            st.push(i);
            i++;
        }
        return ans;
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
