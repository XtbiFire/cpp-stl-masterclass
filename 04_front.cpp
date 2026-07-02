/*
◆────────────────────────────────────────◆
04. front()
◆────────────────────────────────────────◆

Definition:
front() returns the first element
of the vector.

💡 Remember

front() only accesses the first element.

It does not remove the element.

Syntax:
vector_name.front();

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(100);
    v.push_back(200);
    v.push_back(300);

    cout << v.front();

    return 0;
}

/*
Output:
100

Time Complexity:
O(1)
*/