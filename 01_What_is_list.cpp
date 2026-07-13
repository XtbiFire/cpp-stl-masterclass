/*
◆────────────────────────────────────────◆
01. What is std::list?
◆────────────────────────────────────────◆

💡 Remember

std::list is a sequence container
implemented as a Doubly Linked List.

It stores elements in separate nodes.

Header File:
#include <list>

Syntax:
list<int> list_name;

*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> numbers;

    cout << "List Created Successfully";

    return 0;
}

/*
Output:
List Created Successfully

Time Complexity:
O(1)

Space Complexity:
O(1)

Interview Point:
std::list is implemented as a
Doubly Linked List.

Unlike vector, list does not
store elements in contiguous memory.

Random Access:
Not Supported
(list[0] is invalid)
*/