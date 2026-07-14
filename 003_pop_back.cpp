/*
◆────────────────────────────────────────◆
03. pop_back()
◆────────────────────────────────────────◆

Definition:
pop_back() removes the last element
from the vector.

💡 Remember

pop_back() removes only the
last element.

It does not return the removed value.

Syntax:
vector_name.pop_back();

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

    v.pop_back();

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}

/*
Output:
10 20

Time Complexity:
O(1)
*/
