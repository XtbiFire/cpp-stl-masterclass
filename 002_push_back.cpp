/*
◆────────────────────────────────────────◆
02. push_back()
◆────────────────────────────────────────◆

Definition:
push_back() inserts a new element
at the end of the vector.

💡 Remember

push_back() increases the size
of the vector.

If the capacity is full,
the vector allocates new memory
and copies all existing elements.

Syntax:
vector_name.push_back(value);

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}

/*
Output:
10 20 30

Time Complexity:
Amortized O(1)

Worst Case:
O(n)
(When vector reallocates memory)
*/
