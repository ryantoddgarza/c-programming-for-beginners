# structure-pointers

Write a program that creates a structure pointer and passes it to a function.

The program should create a structure named `item` with the following members:

- item name (pointer)
- quantity (integer)
- price (float)
- amount (float) - stores `quantity * price`

Create a function name `read_item` that takes a structure pointer of type `item` as a parameter. This function should read in (from the user) each member value. The read contents should be stored in the structure passed as the function argument.

Create a function named `print_item` that takes a structure pointer of type `item` as a parameter and prints its contents.

The main function should declare an item and a pointer to the item. You will need to allocate memory for the `item_name` pointer.
