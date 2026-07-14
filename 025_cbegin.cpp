/*
◆────────────────────────────────────────◆
25. cbegin()

Definition:
cbegin() returns constant iterator
to first element.

💡 Remember

Value cannot be modified.

Syntax:
vector_name.cbegin();

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {10, 20, 30};

    cout << *v.cbegin();

    return 0;
}

/*
Output:
10

Time Complexity:
O(1)
*/
