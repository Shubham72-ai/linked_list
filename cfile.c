#include<stdio.h>
#include<stdlib.h>


struct Node {

    int data;
    struct Node* next;

};

void create_node() {

struct Node *s, *first, *last, *p;

s=(struct Node *)malloc(sizeof(struct Node));

// here we are creating the first node

s->data = 10;
s->next = NULL; // initially we are setting it to null

first=s;
last=s;   // first and last are now pointing to s



for (int i=0; i<5; i++) {

    s=(struct Node *)malloc(sizeof(struct Node));

    s->data = i;
    s->next = NULL; //up until now we have created new node

    last->next=s; // now we are assign the new node to previous node
    last=s;       // now last is pointing to the last node

}

p=first;

while(p != NULL) {

printf("[%d] --> ", p->data);

p=p->next;
}

}

int main() {

create_node();

return 0;
}
