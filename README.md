# Using Vectors to understand memory management

## Features

- Was an extension of the heap memory task
- I created an MVector (Mathematical vector) class with private attributes, size and values
- The values variable is a pointer to an array of doubles
- I used a pointer because I was unsure how much memory I needed from the Heap, hence in main, when
  I used the new keyword to allocate the extra memory I need which is required for objects, otherwise
  I would need to use malloc.
- I defined the constructor to use the currents objects size to be equal to size so it passes
  the size to the value when the constructor is called, then the array is created of magnitude, size
- I also defined the destructor to delete the extra memory used when I'm done with it so there are no
  memory leaks. i then set values to nullptr so I don't get any dangling pointers
- I then finsihed the extension to give the following functionalities:
    -Changing the value of the array at index i
    -Displaying the values of the array
    -Summing two vectors together
    -Finding the magnitude of a vector
    - Normalising a vector
    - Finding the dot product of two vectors
 
## Additional notes

  - When I needed to add or multiply two vectors, I passed a constant MVector object by reference
    to avoid shallow copies
  - I was getting garbage data when I didn't use the this keyword
## Screenshot of Console
<img width="1462" height="178" alt="image" src="https://github.com/user-attachments/assets/eb5a9ca3-9d8d-43fa-939a-e740e07175cf" />
