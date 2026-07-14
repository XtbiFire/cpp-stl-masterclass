/*
◆────────────────────────────────────────◆
10. empty()
◆────────────────────────────────────────◆

Definition:
empty() checks whether
the vector is empty.

💡 Remember

Returns:
true  -> Vector is empty
false -> Vector is not empty

Syntax:
vector_name.empty();

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    if (v.empty())
        cout << "Vector is Empty";
    else
        cout << "Vector is Not Empty";

    return 0;
}

/*
Output:
Vector is Empty

Time Complexity:
O(1)
*/
