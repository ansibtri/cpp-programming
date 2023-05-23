
### Objects Memory Allocation & Using Arrays in Class

In C++, objects can be allocated memory either on the stack or on the heap. The choice between stack allocation and heap allocation depends on various factors such as the lifetime, scope, and size of the object.

1. __Stack Allocation:__ Objects allocated on the stack are automatically created and destroyed as they come in and out of scope. The memory for stack-allocated objects is managed by the compiler.Objects allocated on the stack are automatically created and destroyed as they come in and out of scope. The memory for stack-allocated objects is managed by the compiler.

2. __Heap Allocation:__ Objects allocated on the heap are created using dynamic memory allocation and require manual memory management. Heap-allocated objects have a longer lifetime than stack-allocated objects and persist until explicitly deallocated using "delete".The "new" operator allocates memory for the object on the heap, and the resulting pointer is assigned to object. The object persists until "delete" is called explicitly to deallocate the memory. Failing to deallocate heap-allocated memory can result in memory leaks.

