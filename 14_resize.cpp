/*
◆────────────────────────────────────────◆
14. resize()
◆────────────────────────────────────────◆

Definition:
resize() changes the size
of the vector.

💡 Remember

If size increases,
new elements are initialized
with default values.

If size decreases,
extra elements are removed.

Syntax:
vector_name.resize(new_size);

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {5, 10};

    v.resize(5);

    for (int x : v)
        cout << x << " ";

    return 0;
}

/*
Output:
5 10 0 0 0

Time Complexity:
O(n)
*/