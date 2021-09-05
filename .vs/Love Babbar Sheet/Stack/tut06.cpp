#include <bits/stdc++.h>
using namespace std;

// Stack STL -->

void printStackElements(stack<int> stack)
{
    while (!stack.empty())
    {
        cout << stack.top() << endl;
        stack.pop();
    }
}

int main()
{
    system("CLS");
    stack<int> numbersStack;

    numbersStack.push(1);
    numbersStack.push(2);
    numbersStack.push(3);
    numbersStack.push(4);
    numbersStack.push(5);

    // numbersStack.pop();
    // numbersStack.pop();
    // numbersStack.pop();
    // numbersStack.pop();
    // numbersStack.pop();

    printStackElements(numbersStack);

    cout << "The size of stack is: " << numbersStack.size() << endl;

    if (numbersStack.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}