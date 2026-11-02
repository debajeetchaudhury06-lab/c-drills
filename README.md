# c-drills

Small C programs for learning pointers and memory.

- swap.c: pointers let a function change the caller's variable
- reverse.c: arrays, strings and pointer arithmetic
- decay.c: arrays turn into pointers when passed to functions
- list.c: linked list with malloc and free

Build: gcc -Wall -g file.c -o file
Leak check: gcc -Wall -g -fsanitize=address list.c -o list_asan
