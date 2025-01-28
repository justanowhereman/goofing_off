#include <iostream>
#include <string.h>

using namespace std;

class Node
{
protected:
    int data=0;
    Node *next=nullptr;

public:
    void takein(int data); // insertion
    void dele(int data);        // delete value
    void del_at_pos(int a);  // del at pos
    void display();     // display the list
};
Node* head=NULL;
Node* current=nullptr;
Node* tail=NULL;
Node* temp = NULL;

int main()
{

    return 0;
}

void Node::takein(int data){
    if (head == NULL){
        head = new Node();
        head->data = data;
    }
    else{

    }
}