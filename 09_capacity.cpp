/*
◆────────────────────────────────────────◆
09. capacity()
◆────────────────────────────────────────◆

Definition:
capacity() returns the total
storage currently allocated.

💡 Remember

Capacity tells how many
elements can be stored
without reallocating memory.

Syntax:
vector_name.capacity();

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

    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity();

    return 0;
}

/*
Sample Output:
Size : 3
Capacity : 4

Note:
Capacity may vary depending
on the compiler.

Time Complexity:
O(1)
*/