/*
◆────────────────────────────────────────◆
05. back()
◆────────────────────────────────────────◆

Definition:
back() returns the last element
of the vector.

💡 Remember

back() only accesses the last element.

It does not remove the element.

Syntax:
vector_name.back();

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

    cout << v.back();

    return 0;
}

/*
Output:
300

Time Complexity:
O(1)
*/