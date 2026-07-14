/*
◆───────────────────────────────◆
30. What is std::list?
◆───────────────────────────────◆

💡 Remember

std::list is a Sequence Container
of the C++ Standard Template
Library (STL).

It stores elements using a
Doubly Linked List.

Unlike vector, elements are
not stored in contiguous memory.

◆───────────────────────────────◆

🎯 Goal

Understand what std::list is,
how it stores data, and when
it should be used.

◆───────────────────────────────◆

📖 Simple Meaning

std::list stores data inside
separate Nodes.

Every Node is connected with
the Previous Node and the
Next Node.

This makes insertion and
deletion very efficient.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine a Train.

Engine ⇄ Coach1 ⇄ Coach2 ⇄ Coach3

Every Coach knows:

← Previous Coach

→ Next Coach

Similarly,

Every Node in std::list knows
its Previous and Next Node.

◆───────────────────────────────◆

⭐ Key Points

✔ std::list is a Sequence Container.

✔ Implemented using a
  Doubly Linked List.

✔ Elements are stored in
  separate Nodes.

✔ Memory is not contiguous.

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

Include the <list> header file.

Step 2:

Create an empty std::list.

Step 3:

Insert three elements using
push_back().

Step 4:

Traverse the list using a
range-based for loop.

Step 5:

Print every element.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is std::list in C++ STL?

Answer:

std::list is a Sequence Container
implemented as a Doubly Linked
List.

It provides efficient insertion
and deletion while storing
elements in non-contiguous memory.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ std::list does not support
  random access.

✘ list[0] is invalid.

✘ Do not confuse std::list
  with std::vector.

✔ Use std::list when frequent
  insertion and deletion are
  required.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Which memory layout does
std::list use?

Answer:

Non-Contiguous Memory.

Each element is stored
inside a separate Node.

◆───────────────────────────────◆

📝 Summary

std::list is a Sequence Container
based on a Doubly Linked List.

It stores elements in separate
Nodes connected using pointers.

◆───────────────────────────────◆

📌 Quick Revision

std::list
      │
      ▼
Sequence Container
      │
      ▼
Doubly Linked List
      │
      ▼
Separate Nodes
      │
      ▼
Fast Insertion & Deletion

◆───────────────────────────────◆

*/
