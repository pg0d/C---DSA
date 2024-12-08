#include <stdio.h>
#include <stdlib.h>
#include "ll.h"


struct LinkedList* create_linked_list()
{
    struct LinkedList* list = malloc(sizeof(*list));
    if (!list) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    list->head = NULL;
    list->tail = NULL;

    return list;
}

struct Node* create_node(int value)
{
    struct Node* new_node = malloc(sizeof(struct Node));
    if (!new_node) {
        printf("Memory allocation failed\n");
        return NULL;
    }

    new_node->value.value = value;
    new_node->next = NULL;
    return new_node;
}

void insert_at_beginning(struct LinkedList* list, int value)
{
    struct Node* new_node = create_node(value);
    if (!new_node) return;

    new_node->next = list->head;
    list->head = new_node;

    if (list->tail == NULL) {
        list->tail = new_node;
    }
}

void insert_at_end(struct LinkedList* list, int value)
{
    struct Node* new_node = create_node(value);
    if (!new_node) return;

    if (list->tail == NULL) {
        list->head = new_node;
        list->tail = new_node;
    } else {
        list->tail->next = new_node;
        list->tail = new_node;
    }
}

void print_list(struct LinkedList* list)
{
    struct Node* current = list->head;
    while (current != NULL) {
        printf("%d -> ", current->value.value);
        current = current->next;
    }

    printf("NULL\n");
}
