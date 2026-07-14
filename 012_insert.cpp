/*
◆────────────────────────────────────────◆
12. insert()
◆────────────────────────────────────────◆

Definition:
insert() adds an element
at a specific position.

💡 Remember

Elements after the insertion point
are shifted to the right.

Syntax:
vector_name.insert(iterator, value);

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {10, 20, 40};

    v.insert(v.begin() + 2, 30);

    for (int x : v)
        cout << x << " ";

    return 0;
}

/*
Output:
10 20 30 40

Time Complexity:
O(n)
*/
