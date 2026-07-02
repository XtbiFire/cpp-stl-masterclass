/*
◆────────────────────────────────────────◆
06. at()
◆────────────────────────────────────────◆

Definition:
at() returns the element
at the specified index.

💡 Remember

at() performs bounds checking.

If an invalid index is used,
it throws an exception.

Syntax:
vector_name.at(index);

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

    cout << v.at(1);

    return 0;
}

/*
Output:
20

Time Complexity:
O(1)
*/