#include <stdio.h>

typedef struct Node {
    int x;
    struct Node* next;
} Node;

void insert_end(Node** root, int value){
    // create new element
    Node* new_node = malloc(sizeof(Node));
    // computer have no memory
    if(new_node == NULL) exit(1);
    new_node->next = NULL;
    new_node->x = value;

    // if there are no elements
    if(*root == NULL){
        *root = new_node;
        return;
    }

    //add it to the end
    Node* curr = *root;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = new_node;
}

void deallocate(Node** root){
    Node* curr = *root;
    while(curr != NULL){
        Node* aux = curr;
        curr = curr->next;
        free(aux);
    }
    *root = NULL;
}

void insert_beginning(Node** root, int value){
    // create new element
    Node* new_node = malloc(sizeof(Node));
    // computer have no memory
    if(new_node == NULL) exit(1);
    new_node->next = *root;
    new_node->x = value;

    *root = new_node;
}

void insert_after(Node* node, int value){
    Node* new_node = malloc(sizeof(Node));
    // computer have no memory
    if(new_node == NULL) exit(1);
    new_node->x = value;
    new_node->next = node->next;

    node->next = new_node;
}

int count(Node* root){
    int count = 0;

    for(Node* curr = root; curr != NULL; curr = curr->next){
        count++;
    }

    return count;
}

void print(Node** root){
    Node* curr = root;
    while(curr != NULL){
        printf("%d\n", curr->x);
        curr = curr->next;
    }
}

Node* get_element(Node* root, int position){
    Node* curr = root;
    int i = 0;
    while(curr != NULL && i != position){
        curr = curr->next;
        i++;
    }
    return curr;
}

// TODO: if "position" is 0 - not work
void insert_at(Node** root, int position, int value){
    Node* curr = root;
    int i = 1;
    while(curr != NULL && i != position){
        curr = curr->next;
        i++;
    }
    Node* new_node = malloc(sizeof(Node));
    // computer have no memory
    if(new_node == NULL) exit(1);
    new_node->x = value;
    new_node->next = curr->next;

    curr->next = new_node;
}

// TODO: if "position" is 0 - not work
void remove_at(Node** root, int position){
    Node* curr = root;
    int i = 1;
    while(curr != NULL && i != position){
        curr = curr->next;
        i++;
    }
    curr->next = curr->next->next;
}

int main(){
    Node* root = NULL;
    insert_end(&root, 6);
    insert_beginning(&root, 4);
    insert_after(root, 5);
    insert_end(&root, 7);
    insert_beginning(&root, 2);
    insert_after(root, 3);
    insert_at(root, 2, 69);

    remove_at(root, 4);

    print(root);
    printf("\n\nCount: %d\n\n", count(root));
    printf("Element 1: %d\n", get_element(root, 1)->x);

    deallocate(&root);
    return 0;
}
