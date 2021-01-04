# include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
struct Node *head = NULL;

/* Given a reference (pointer to pointer) to the head of a list
and an int, inserts a new node on the front of the list. */
void push(struct Node** head_ref, int new_data)
{
	/* 1. allocate node */
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

	/* 2. put in the data */
	new_node->data = new_data;

	/* 3. Make next of new node as head */
	new_node->next = (*head_ref);

	/* 4. move the head to point to the new node */
	(*head_ref) = new_node;
}

// Function to reverse the list
static void reverse(struct Node** head_ref)
{
    struct Node* prev = NULL;
    struct Node* current = *head_ref;
    struct Node* next = NULL;
    while (current != NULL) {
        // Store next
        next = current->next;

        // Reverse current node's pointer
        current->next = prev;

        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    *head_ref = prev;
}
printList(struct Node *head){
    while(head!=NULL){
        printf("%d ", head->data);
        head = head->next;
    }
}
void deleteNode(struct node **href, int key, int len){
    struct Node *temp = *href, *prev;
    int k =0;
    for(k=0;k<len; k++){
        if (temp != NULL && k == key)
        {
        *href = temp->next;   // Changed head
        free(temp);               // free old head
        return;
        }
    }
    while (temp != NULL && k != key)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;

    free(temp);  // Free memory
    printf("\n------------adkjas----------------\n");
    return head;
}

    int main(){
            int M;
            int book_no;
            scanf("%d" , &M);
            int i =0;
            for(i=0; i<M; i++){
                scanf("%d", &book_no);
                push(&head, book_no);
            }
            reverse(&head);
            int N;
            scanf("%d" , &N);
            i =0;
            for( i =0; i<N; i++){
                int borrowed_position[N];
                scanf("%d" , &borrowed_position[i]);
                struct Node *temp = head;
                int j =0;
                for(j =0;j<M;j++){
                    if ( j==borrowed_position[j]-1){
                      temp->next->next;
                      printf("\ndata\n %d", temp->data);
                    }
                    else{
                    temp= temp->next;
                    }
                }
               /*for(j =1; j<M; j++){

                    if(j == borrowed_position){
                        book_borrowed[j] = temp->data;
                        int k =0;
                        for(k =1;k<=j;k++){
                           if( k == j-1){
                             temp = temp->next->next;
                           }
                           temp=temp->next;
                        }
                        printf("List -\n");
                        printList(temp);
                         printf("\nbook borrowed data -> %d", book_borrowed[j]);
                    }
                    temp = temp->next;
                }

                j =0;
                for(j=0; j<N;j++){
                    printf("%d\n", book_borrowed[j]);
                }*/
            }
        }

