/*
◆────────────────────────────────────────◆
19. shrink_to_fit()
◆────────────────────────────────────────◆

Definition:
shrink_to_fit() requests the vector
to reduce its capacity
to match its size.

💡 Remember

It is a request,
not a guarantee.

Syntax:
vector_name.shrink_to_fit();

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    v.reserve(10);

    v.push_back(1);
    v.push_back(2);

    v.shrink_to_fit();

    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity();

    return 0;
}

/*
Sample Output:
Size : 2
Capacity : 2

Note:
Result may vary depending
on the compiler.

Time Complexity:
O(n)
*/
