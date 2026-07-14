/*
◆────────────────────────────────────────◆
07. operator [ ]
◆────────────────────────────────────────◆

Definition:
[] is used to access
elements using an index.

💡 Remember

[] is faster than at().

It does NOT perform
bounds checking.

Syntax:
vector_name[index];

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {10, 20, 30};

    cout << v[2];

    return 0;
}

/*
Output:
30

Time Complexity:
O(1)
*/
