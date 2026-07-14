/*
◆────────────────────────────────────────◆
26. Iterator (Traversal)

Definition:
Iterator is used to traverse
containers like vector.

💡 Remember

Works like pointer.

Syntax:
vector<int>::iterator it;

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {10, 20, 30};

    vector<int>::iterator it;

    for(it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}

/*
Output:
10 20 30

Time Complexity:
O(n)
*/
