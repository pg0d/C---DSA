struct Data {
    int value;
};

struct Node {
    struct Data value;
    struct Node* next;
};

struct LinkedList {
    struct Node* head;
    struct Node* tail;
};

struct LinkedList* create_linked_list();
struct Node* create_node(int value);
void insert_at_beginning(struct LinkedList* list, int value);
void insert_at_end(struct LinkedList* list, int value);
void print_list(struct LinkedList* list);
