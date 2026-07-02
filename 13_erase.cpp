/*
◆────────────────────────────────────────◆
13. erase()
◆────────────────────────────────────────◆

Definition:
erase() removes an element
from a specific position.

💡 Remember

Elements after the erased element
are shifted to the left.

Syntax:
vector_name.erase(iterator);

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40};

    v.erase(v.begin() + 1);

    for (int x : v)
        cout << x << " ";

    return 0;
}

/*
Output:
10 30 40

Time Complexity:
O(n)
*/