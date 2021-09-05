#include <iostream>
using namespace std;

int main()
{
    float profit, loss, cost_price, selling_price;
    cout << "Enter cost price & selling price resp. " << endl;
    cin >> cost_price >> selling_price;

    profit = selling_price - cost_price;
    loss = cost_price - selling_price;

    // if (selling_price > cost_price)
    // {
    //     cout << "Seller has made profit of" << profit << endl;
    // }
    // else
    // {
    //     cout << "Seller has made loss of" << loss << endl;
    // }

    (selling_price > cost_price) ? cout << "Seller has made profit of " << profit : cout << "Seller has made loss of " << loss;

    return 0;
}