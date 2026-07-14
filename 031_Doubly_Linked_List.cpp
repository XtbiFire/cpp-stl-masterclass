/*
◆───────────────────────────────◆
31. Doubly Linked List
◆───────────────────────────────◆

💡 Remember

std::list is implemented using
a Doubly Linked List.

Each Node stores:

1. Previous Address
2. Data
3. Next Address

This allows movement in both
forward and backward directions.

◆───────────────────────────────◆

🎯 Goal

Understand why std::list uses
a Doubly Linked List and how
its Nodes are connected.

◆───────────────────────────────◆

📖 Simple Meaning

A Doubly Linked List is made
of multiple Nodes.

Each Node stores its own Data
along with the address of the
Previous Node and the Next Node.

Unlike vector, Nodes are not
stored side by side in memory.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine Train Coaches.

Coach1 ⇄ Coach2 ⇄ Coach3

Every Coach knows:

← Previous Coach

→ Next Coach

Similarly,

Every Node knows:

← Previous Node

→ Next Node

◆───────────────────────────────◆

⭐ Key Points

✔ std::list uses a
  Doubly Linked List.

✔ Every Node stores Data.

✔ Every Node stores the
  Previous Address.

✔ Every Node stores the
  Next Address.

✔ Traversal is possible in
  both directions.

✔ Memory is not contiguous.

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
one by one.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create an empty list.

Step 2:

Insert three elements.

Step 3:

Three separate Nodes are
created internally.

Step 4:

Each Node stores the address
of its Previous and Next Node.

Step 5:

Print all elements.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Why is std::list called a
Doubly Linked List?

Answer:

Because every Node stores
the address of both the
Previous Node and the
Next Node.

This allows traversal in
both forward and backward
directions.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Do not think every element
  is stored continuously.

✘ std::list does not support
  random access.

✘ list[0] is invalid.

✔ Every element is stored
  inside a separate Node.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

How many addresses are stored
inside one Node?

Answer:

Two Addresses.

1. Previous Address

2. Next Address

Along with the Data.

◆───────────────────────────────◆

📝 Summary

std::list is based on a
Doubly Linked List.

Each Node stores:

Previous Address

Data

Next Address

This makes insertion and
deletion efficient.

◆───────────────────────────────◆

📌 Quick Revision

std::list
      │
      ▼
Doubly Linked List
      │
      ▼
Prev | Data | Next
      │
      ▼
Forward & Backward
Traversal

◆───────────────────────────────◆