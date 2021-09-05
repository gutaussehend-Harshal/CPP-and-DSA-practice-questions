#include <iostream>
using namespace std;
int main()
{
    //define MONTHS as having 12 possible values
    enum MONTH {Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
    
    //define bestMonth as a variable type MONTHS
    MONTH bestMonth;
    
    //assign bestMonth one of the values of MONTHS
    bestMonth = Jan;
    
    //now we can check the value of bestMonths just 
    //like any other variable
    if(bestMonth == Jan)
    {
        cout<<"Mine too!!! What do you think the announcement will be about coming from Block one?\n";
    }
    return 0;
}