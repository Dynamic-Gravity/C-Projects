/**********************
* Luke Brown          *
* luke4@g.clemson.edu *
* Section 003         *
* Lab 5               *
* 09-21-16            *
**********************/
#include <stdio.h>
#include <malloc.h>

// define the node struct
typedef struct node_type {
    int val;
    struct node_type * next;
} node;


int main() {

    //declare variables
    node *head;
    unsigned int i = 0;
    
   //Created a linked list
    for(i=0;i<=10;i++) {
        
        node* curr;
	curr = malloc(sizeof(node)); // allocate memory for new node
     
	// set the data members of the newly created node
	// and update the head node to the newly created node
        curr->val = i;
        curr->next = head;
        head = curr;
    }
 
  //Print out the values
    while(head->val != 0) {
        printf("value = %i\n", head->val);
        head = head->next;
    }
    
    puts("\nFinished running program.");

   return 0;
}


