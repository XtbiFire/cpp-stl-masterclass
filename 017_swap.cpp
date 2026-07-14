/*
◆────────────────────────────────────────◆
17. swap()
◆────────────────────────────────────────◆

Definition:
swap() exchanges the contents
of two vectors.

💡 Remember

Size and elements
of both vectors are exchanged.

Syntax:
vector1.swap(vector2);

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1 = {1, 2};
    vector<int> v2 = {10, 20, 30};

    v1.swap(v2);

    cout << "Vector 1 : ";
    for (int x : v1)
        cout << x << " ";

    cout << endl;

    cout << "Vector 2 : ";
    for (int x : v2)
        cout << x << " ";

    return 0;
}

/*
Output:
Vector 1 : 10 20 30
Vector 2 : 1 2

Time Complexity:
O(1)
*/
