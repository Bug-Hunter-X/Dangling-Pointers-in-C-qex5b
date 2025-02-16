# Dangling Pointers in C

This repository demonstrates a common error in C programming: dangling pointers. A dangling pointer points to a memory location that has been freed or released, leading to undefined behavior.  Accessing a dangling pointer can cause crashes, unexpected results, or security vulnerabilities. This example shows how it can occur and a safe way to handle it.

## Files

* `bug.c`: Demonstrates the use of dangling pointer
* `bugSolution.c`: Correct version avoiding dangling pointer issues
