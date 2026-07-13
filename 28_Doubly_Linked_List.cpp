/*
◆────────────────────────────────────────◆
02. Doubly Linked List
◆────────────────────────────────────────◆

💡 Remember

std::list is implemented as a
Doubly Linked List.

Each node contains:

1. Previous Address
2. Data
3. Next Address

*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> numbers = {10, 20, 30};

    cout << "Doubly Linked List Created";

    return 0;
}

/*
Output:
Doubly Linked List Created

Time Complexity:
O(1)

Interview Point:
Each node stores:

Previous Address
Data
Next Address
*/