## Memory Allocation and Deallocation w/ strings

In C strings are just an array of Chars.

The `malloc()` function allocates memory and leaves the memory uninitialized, 
whereas the `calloc()` function allocates memory and initializes all bits to zero.
Calloc is continous allocation.

`message=(char*)calloc(message_length+1, sizeof(char));`

To add chars to the message string:
```
for(int i=0; i<message_length; i++){
  *(message+i)='L';
}
```
Remember to Free variables after they are used.
`free(message);`
