/*
◆────────────────────────────────────────◆
22. end()
◆────────────────────────────────────────◆

Definition:
end() returns iterator
pointing just after last element.

💡 Remember

It is NOT last element.

Syntax:
vector_name.end();

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {10, 20, 30};

    cout << *(v.end() - 1);

    return 0;
}

/*
Output:
30

Time Complexity:
O(1)
*/