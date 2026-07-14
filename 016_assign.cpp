/*
◆────────────────────────────────────────◆
16. assign()
◆────────────────────────────────────────◆

Definition:
assign() replaces all elements
of the vector with new values.

💡 Remember

Old elements are removed.

New elements are assigned
to the vector.

Syntax:
vector_name.assign(count, value);

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    v.assign(5, 9);

    for (int x : v)
        cout << x << " ";

    return 0;
}

/*
Output:
9 9 9 9 9

Time Complexity:
O(n)
*/
