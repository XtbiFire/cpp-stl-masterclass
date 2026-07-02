/*
◆────────────────────────────────────────◆
21. begin()
◆────────────────────────────────────────◆

Definition:
begin() returns an iterator
pointing to the first element.

💡 Remember

Used to start traversal
from beginning.

Syntax:
vector_name.begin();

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {10, 20, 30};

    cout << *v.begin();

    return 0;
}

/*
Output:
10

Time Complexity:
O(1)
*/