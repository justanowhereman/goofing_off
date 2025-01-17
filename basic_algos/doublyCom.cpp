#include<iostream>
#include<string.h>

using namespace std;

// sort all methods
// search
// reverse
class Node{
public:

    int data;
    Node *next= nullptr;
    Node *prev= nullptr;

    void insert(int v);
    void display();

    class Sort{
    public:    
        void bubble();
        void quick();
        void merge();
        void insert();
        void select();
    };

}*head=NULL, *tail=NULL, *temp=NULL, *current=NULL;

int main()
{

    Node d;
    d.insert(23);
    d.insert(30);
    d.insert(21);
    d.insert(54);
    d.display();

    cout<<"Sorting..\n";
    Node::Sort s;
    s.bubble();
    d.display();

    return 0;
}

void Node:: insert(int v){
    if (head==NULL){
        temp= new Node;
        temp->data= v;
        temp->next= nullptr;
        temp->prev= nullptr;
        head= tail= temp;
    
    } else{
        temp= new Node;
        temp->data= v;
        tail->next= temp;
        temp->prev= tail;
        tail=temp;
    }
}

void Node:: display(){
    current= head;

    while(current != nullptr){
        cout<< current->data << " ";
        current= current->next;
    }
}

void Node :: Sort :: bubble(){
    // compare adjacent values swap them if the left one is bigger of two 
    
    bool swap= false;

    do{
        if (head==NULL){
            cout<< "Empty list nothing to sort.." ;
        }
        else{
            current=head;
            Node* fodder= new Node; 

                while(current->next!= nullptr){
                    if(current->data > current->next->data ){
                        fodder->data= current->data;
                        current->data = current->next->data;
                        current->next->data= fodder->data;
                        current= current->next;
                        swap= true;
                    }else{
                        current= current->next;
                        }
                    }
        } }
        while(swap);   
}

void Node::Sort:: select(){
    // smallest value of each iteration is put at the start of current iteration

    if(head==NULL){
            cout<<"list empty";
    }else{
        current= head;
        Node* temp= new Node; // for swap
        Node* min= new Node; //hold minimum value of itertion
        
        while(current->next != nullptr){
            if (current->data > current->next->data){
                // swap the values
                temp->data= current->data;
                current->data= min->data;
                min->data= temp->data;
                // iterate
                current= current->next;
            }else{
            current= current->next;
            } 
        }   
    }
}