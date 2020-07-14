#include <stdio.h>
#include <stdlib.h>

int count = 0; //global variable

//creating node
struct Node {
    int item;
    struct Node* next;
};

// inserting element
void insert(struct Node** ref, int data) 
{
    // allocating memory to a node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->item = data;
    new_node->next = (*ref);
    (*ref) = new_node;
}
//delelting element
void delete(struct Node** ref, int key) 
{
    struct Node *temp = *ref, *prev;
    if (temp != NULL && temp->item == key)
    {
        *ref = temp->next;
        free(temp);
        return;
    }
//deleting element condition
    while (temp != NULL && temp->item != key)
    {
        prev = temp;
        temp = temp->next;
    }
// element not present condition
    if (temp == NULL)
    {
        printf("\nEntered element is not present in the list : ");
        count=1;
        return;
    }
// removing the node
    prev->next = temp->next;
    free(temp);
}

// printing the linked list
void display(struct Node* node)
{
    while (node != NULL)
    {
        printf(" %d ", node->item);
        node = node->next;
    }
}


int main() {
    struct Node* head = NULL;
    int arr[4];
    int n;

    printf("\nEnter four elements to insert in linked list ---\n");
    for (int i = 0; i < 4; i++)
    {      
        scanf("%d", &arr[i]);
        insert(&head, arr[i]);
    }

    printf("\nInputted linked list is : ");
    display(head);
  
//inputting element to delete
    printf("\n\nEnter the element to delete : ");
    scanf("%d", &n);

//delete element
    delete(&head, n);
    if (count==1)
    {   //element not present
        display(head);
    }
    else
    {   //deleting element
        printf("\nAfter deleting %d\nThe linked list is as follows : ", n);     
        display(head);
    }
  
  return 0;
}