/*
◆───────────────────────────────◆
33. Vector vs List
◆───────────────────────────────◆

💡 Remember

Both std::vector and std::list
are Sequence Containers.

But their internal working
is completely different.

Choose the container according
to the problem.

◆───────────────────────────────◆

🎯 Goal

Understand the differences
between std::vector and
std::list and learn when
to use each one.

◆───────────────────────────────◆

📖 Simple Meaning

std::vector stores elements
in contiguous memory.

std::list stores elements
inside separate Nodes.

Vector provides fast random
access.

List provides fast insertion
and deletion.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine a Classroom.

Vector

Student chairs are arranged
side by side.

10 20 30 40 50

If one student sits at the
front, everyone shifts.

List

Students stand in a chain.

10 ⇄ 20 ⇄ 30 ⇄ 40 ⇄ 50

Only the links change when
someone joins or leaves.

◆───────────────────────────────◆

⭐ Key Points

✔ vector uses contiguous memory.

✔ list uses non-contiguous memory.

✔ vector supports random access.

✔ list does not support
  random access.

✔ vector is faster for
  searching by index.

✔ list is faster for
  insertion and deletion.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
#include <vector>
#include <list>

using namespace std;

// Main Function
int main()
{
    vector<int> v = {10, 20, 30};

    list<int> l = {10, 20, 30};

    cout << "Vector : ";

    for (int x : v)
    {
        cout << x << " ";
    }

    cout << endl;

    cout << "List   : ";

    for (int x : l)
    {
        cout << x << " ";
    }

    return 0;
}

/*

▶ Execution Output

Vector : 10 20 30
List   : 10 20 30

⚙ Complexity

Vector

Random Access : O(1)

Insertion at End : Amortized O(1)

Insertion at Front : O(n)

Deletion at Front : O(n)

----------------------------

List

Random Access : O(n)

Insertion : O(1)

Deletion : O(1)

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create one Vector.

Step 2:

Create one List.

Step 3:

Store the same elements
inside both containers.

Step 4:

Print both containers.

Step 5:

Observe that the output is
the same, but internally
both containers work
differently.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

When should you use
std::vector instead of
std::list?

Answer:

Use std::vector when fast
random access and cache-friendly
storage are required.

Use std::list when frequent
insertions and deletions are
performed.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Do not use std::list when
  frequent indexing is needed.

✘ Do not use std::vector for
  frequent insertion at the
  beginning.

✘ Never assume both containers
  have the same performance.

✔ Select the container
  according to the problem.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Which container supports
operator[] ?

✅ Answer:

std::vector

Question:

Does std::list support
operator[] ?

✅ Answer:

No.

◆───────────────────────────────◆

📝 Summary

std::vector

✔ Contiguous Memory

✔ Random Access

✔ Fast Traversal

----------------------------

std::list

✔ Doubly Linked List

✔ Non-Contiguous Memory

✔ Fast Insertion & Deletion

◆───────────────────────────────◆

📌 Quick Revision

             Vector          List

Memory   →  Contiguous    Non-Contiguous

Access   →  O(1)          O(n)

Insert   →  Slow Front    Fast

Delete   →  Slow Front    Fast

Use      →  Indexing      Frequent Insert/Delete

◆───────────────────────────────◆

*/