/*
◆────────────────────────────────────────◆
23. rbegin()
◆────────────────────────────────────────◆

Definition:
rbegin() returns reverse iterator
from last element.

💡 Remember

Used for reverse traversal.

Syntax:
vector_name.rbegin();

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {10, 20, 30};

    cout << *v.rbegin();

    return 0;
}

/*
Output:
30

Time Complexity:
O(1)
*/
