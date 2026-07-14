/*
◆────────────────────────────────────────◆
24. rend()
◆────────────────────────────────────────◆

Definition:
rend() marks reverse end
of the vector.

💡 Remember

Used with reverse iteration.

Syntax:
vector_name.rend();

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {10, 20, 30};

    cout << *(v.rend() - 1);

    return 0;
}

/*
Output:
10

Time Complexity:
O(1)
*/
