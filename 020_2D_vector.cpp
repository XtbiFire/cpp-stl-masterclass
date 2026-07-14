/*
◆────────────────────────────────────────◆
20. 2D Vector
◆────────────────────────────────────────◆

Definition:
A 2D vector is a vector
of vectors.

💡 Remember

Rows are the outer vector.

Columns are the inner vectors.

Syntax:
vector<vector<int>> matrix;

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> matrix =
    {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    for (auto row : matrix)
    {
        for (int value : row)
        {
            cout << value << " ";
        }

        cout << endl;
    }

    return 0;
}

/*
Output:
10 20 30
40 50 60
70 80 90

Time Complexity:
O(rows × columns)
*/
