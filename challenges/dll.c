#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

typedef struct {
    char* data;
    struct Node* next;
    struct Node* prev;
} Node;

Node *create_node(const char *str){
    Node *new_node = malloc(sizeof(Node));
    new_node->data = malloc(strlen(str) + 1);
    strcpy(new_node->data, str);
    new_node->next = NULL;
    new_node->prev = NULL;
    return new_node;
}

void *insert_front(Node **head, const char *str){
    Node *new_node = create_node(str);
    new_node->next = *head;
    *head = new_node;
}

int main(){
    printf("Hello, World!\n");
    return 0;
}