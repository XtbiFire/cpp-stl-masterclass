/*
◆────────────────────────────────────────◆
01. Vector Creation
◆────────────────────────────────────────◆

Definition:
A vector is a dynamic array provided
by the C++ STL.

💡 Remember

A vector can automatically grow
or shrink in size during runtime.

Syntax:
vector<data_type> vector_name;

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    cout << "Vector Created Successfully";

    return 0;
}

/*
Output:
Vector Created Successfully

Time Complexity:
O(1)
*/