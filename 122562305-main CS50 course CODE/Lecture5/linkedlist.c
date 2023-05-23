#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    //Create a singly-linked list when it doesn't already exist

    sllnode *new = create(6);

    //Search through a linked list to find an element

    bool find (sllnode *head, VALUE val);
    bool exists = find(list, 6);

    //Insert a new node into a linked list

    sllnode *insert(sllnode *head, VALUE val);
    list =  insert(list, 12);

    //Delete a single element from a linked list

   

    //Delete an entire linked list
    void destroy(sllnode *head);
    destroy(list);

}