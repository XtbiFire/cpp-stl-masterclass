/*
◆────────────────────────────────────────◆
08. size()
◆────────────────────────────────────────◆

Definition:
size() returns the current
number of elements.

💡 Remember

size() tells how many
elements are present
inside the vector.

Syntax:
vector_name.size();

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(5);
    v.push_back(10);
    v.push_back(15);

    cout << v.size();

    return 0;
}

/*
Output:
3

Time Complexity:
O(1)
*/