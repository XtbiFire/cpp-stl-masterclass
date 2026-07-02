/*
◆────────────────────────────────────────◆
15. reserve()
◆────────────────────────────────────────◆

Definition:
reserve() increases the capacity
of the vector.

💡 Remember

reserve() changes capacity only.

It does NOT change the size.

Syntax:
vector_name.reserve(capacity);

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    v.reserve(10);

    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity();

    return 0;
}

/*
Sample Output:
Size : 0
Capacity : 10

Time Complexity:
O(n)
*/