/*
◆───────────────────────────────◆
03. Memory Layout
◆───────────────────────────────◆

💡 Remember

std::list does not store
elements in contiguous memory.

Every element is stored inside
a separate Node.

Nodes are connected using
Previous and Next pointers.

◆───────────────────────────────◆

🎯 Goal

Understand how std::list stores
elements in memory.

◆───────────────────────────────◆

📖 Simple Meaning

Unlike vector, list does not
store elements side by side.

Every element gets its own
Node in memory.

Each Node is connected using
addresses.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine three Houses.

House A        House B        House C

They are built at different
locations.

Roads connect all Houses.

Similarly,

Nodes are stored at different
memory locations.

Pointers connect all Nodes.

◆───────────────────────────────◆

⭐ Key Points

✔ Memory is not contiguous.

✔ Every element is stored
  inside a separate Node.

✔ Nodes are connected using
  pointers.

✔ Easy insertion and deletion.

✔ Random access is not possible.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    // Main Function

    list<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    for (int x : numbers)
    {
        cout << x << " ";
    }

    return 0;
}

/*

▶ Execution Output

10 20 30

⚙ Complexity

Time  : O(n)
Space : O(1)

Reason:

Printing visits every Node once.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create an empty list.

Step 2:

Insert three elements.

Step 3:

Three separate Nodes are
created in memory.

Step 4:

Nodes are connected using
Previous and Next pointers.

Step 5:

Print every element.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Why does std::list not support
random access?

Answer:

Because elements are stored
in separate Nodes instead of
contiguous memory.

To reach an element,
the list must traverse
through Nodes.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Do not assume list stores
  elements like vector.

✘ list[0] is invalid.

✘ Every Node needs extra
  memory for pointers.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Why is insertion faster in
std::list than vector?

Answer:

Because only Node links are
changed.

Existing elements are not
shifted.

◆───────────────────────────────◆

📝 Summary

std::list stores every element
inside a separate Node.

Nodes are connected using
Previous and Next pointers.

Memory is non-contiguous.

◆───────────────────────────────◆

📌 Quick Revision

std::list
     │
     ▼
Separate Nodes
     │
     ▼
Prev ← Data → Next
     │
     ▼
Non-Contiguous Memory

◆───────────────────────────────◆

*/