#include <bits/stdc++.h>
#include <forward_list>
using namespace std;

// Forward List in C++ (Singly linked list)-->

void display(forward_list<int> f)
{
    cout << "head -> ";
    for (auto value : f)
    {
        cout << value << " -> ";
    }
    cout << " Null";
    cout << endl;
}

int main()
{
    system("CLS");
    forward_list<int> flist1;
    forward_list<int> flist2;

    // Assigning values using assign()
    flist1.assign({1, 2, 3, 4, 5});

    // Assigning repeating values using assign()
    // 5 elements with value 10
    flist2.assign(5, 10);

    display(flist1);
    display(flist2);

    // Inserting value using push_front()
    // Inserts 60 at front
    flist1.push_front(60);
    display(flist1);

    // Inserting value using emplace_front()
    // Inserts 70 at front
    flist1.emplace_front(70);
    display(flist1);

    // Deleting first value using pop_front()
    // Pops 70
    flist1.pop_front();
    display(flist1);

    // Inserting value using insert_after()
    // starts insertion from second position

    // forward_list<int>::iterator ptr;
    auto ptr = flist1.insert_after(flist1.begin(), {10, 20, 30});
    display(flist1);

    // Inserting value using emplace_after()
    // inserts 2 after ptr
    auto ptr1 = flist1.emplace_after(ptr, 2);
    display(flist1);

    // Deleting value using erase.after Deleted 2
    // after ptr
    auto ptr2 = flist1.erase_after(ptr);
    display(flist1);

    // Removing element using remove()
    // Removes all occurrences of 60
    flist1.remove(60);
    display(flist1);

    // Removing according to condition. Removes
    // elements greater than 5. Removes 10, 20 & 30
    flist1.remove_if([](int x)
                     { return x > 5; });
    display(flist1);

    // Shifting elements from first to second
    // forward list after 1st position
    flist2.splice_after(flist2.begin(), flist1);
    display(flist2);

    return 0;
}