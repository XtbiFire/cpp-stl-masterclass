/*
◆───────────────────────────────◆
35. Creating A List
◆───────────────────────────────◆

💡 Remember

Before storing data, a std::list
must be created.

A list can be created in
different ways.

◆───────────────────────────────◆

🎯 Goal

Learn how to create a std::list
using the most common methods
in C++ STL.

◆───────────────────────────────◆

📖 Simple Meaning

Creating a list means making
an empty or initialized
container that can store
multiple elements.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine buying a Train.

First,

You create the Train.

Then,

You start attaching Coaches.

Similarly,

First create a list.

Then,

Store elements inside it.

◆───────────────────────────────◆

⭐ Key Points

✔ Include the <list> header.

✔ std::list belongs to STL.

✔ A list can be empty.

✔ A list can also be
  initialized with values.

✔ Data Type must be specified.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

// Main Function
int main()
{
    // Empty List
    list<int> numbers;

    // List with Initial Values
    list<int> marks = {90, 85, 95};

    cout << "Numbers List Size : "
         << numbers.size() << endl;

    cout << "Marks : ";

    for (int x : marks)
    {
        cout << x << " ";
    }

    return 0;
}

/*

▶ Execution Output

Numbers List Size : 0
Marks : 90 85 95

⚙ Complexity

Creating Empty List : O(1)

Creating Initialized List : O(n)

Reason:

The initialized list inserts
n elements during creation.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Include the <list> header.

Step 2:

Create an empty list named
numbers.

Step 3:

Create another list named
marks with initial values.

Step 4:

Display the size of the
empty list.

Step 5:

Print all elements of
the initialized list.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

How do you create an empty
std::list?

Answer:

list<int> numbers;

----------------------------

Question:

How do you create a list
with initial values?

Answer:

list<int> numbers = {10, 20, 30};

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Forgetting to include
  the <list> header.

✘ Forgetting to specify
  the Data Type.

✘ Confusing std::list
  with std::vector.

✔ Always create the list
  before inserting data.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Can an empty std::list
store elements later?

✅ Answer:

Yes.

Elements can be inserted
anytime using functions like

push_back()

push_front()

insert()

◆───────────────────────────────◆

📝 Summary

std::list can be created
as an empty container or
with initial values.

After creation, elements
can be inserted using
different member functions.

◆───────────────────────────────◆

📌 Quick Revision

Create List
      │
      ▼
Empty List

list<int> l;

      │
      ▼
Initialized List

list<int> l = {10,20,30};

◆───────────────────────────────◆

*/