/*
◆────────────────────────────────────────◆
18. emplace_back()
◆────────────────────────────────────────◆

Definition:
emplace_back() adds a new element
at the end of the vector.

💡 Remember

Unlike push_back(),
emplace_back() constructs
the object directly inside
the vector.

Syntax:
vector_name.emplace_back(value);

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    v.emplace_back(10);
    v.emplace_back(20);
    v.emplace_back(30);

    for (int x : v)
        cout << x << " ";

    return 0;
}

/*
Output:
10 20 30

Time Complexity:
Amortized O(1)

Worst Case:
O(n)
*/