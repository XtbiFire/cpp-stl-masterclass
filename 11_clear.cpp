/*
◆────────────────────────────────────────◆
11. clear()
◆────────────────────────────────────────◆

Definition:
clear() removes all elements
from the vector.

💡 Remember

After clear():
Size becomes 0.

Capacity usually remains unchanged.

Syntax:
vector_name.clear();

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40};

    v.clear();

    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity();

    return 0;
}

/*
Sample Output:
Size : 0
Capacity : 4

Note:
Capacity may vary depending
on the compiler.

Time Complexity:
O(n)
*/