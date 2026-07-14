/*
◆───────────────────────────────◆
32. Memory Layout
◆───────────────────────────────◆

💡 Remember

std::list does not store
elements in contiguous memory.

Each element is stored inside
a separate Node.

Nodes are connected using
Previous and Next pointers.

◆───────────────────────────────◆

🎯 Goal

Understand how std::list stores
elements in memory and why its
memory layout is different from
std::vector.

◆───────────────────────────────◆

📖 Simple Meaning

In std::list, every element gets
its own Node.

These Nodes can exist at different
memory locations.

Pointers connect all the Nodes
together.

Unlike vector, the elements are
not stored side by side.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine three Houses.

House A          House B          House C

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

✔ Every element has its own Node.

✔ Nodes are connected using
  pointers.

✔ Fast insertion and deletion.

✔ Random Access is not supported.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

// Main Function
int main()
{
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

Printing visits every Node
exactly once.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create an empty list.

Step 2:

Insert three elements.

Step 3:

Each element is stored inside
a separate Node.

Step 4:

Nodes are connected using
Previous and Next pointers.

Step 5:

Traverse and print every Node.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Why does std::list use
non-contiguous memory?

Answer:

Because every element is stored
inside a separate Node.

The Nodes are connected using
pointers instead of storing
elements side by side.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Do not think list stores
  elements like vector.

✘ list[0] is invalid.

✘ Every Node requires extra
  memory for pointers.

✔ std::list uses separate
  Nodes connected by pointers.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Why is insertion faster in
std::list than std::vector?

Answer:

Because only the Node links
are updated.

Existing elements do not
need to be shifted.

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