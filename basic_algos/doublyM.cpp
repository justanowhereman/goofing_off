#include <iostream>
#include <string.h>

using namespace std;

class Node{

    int data;
    Node *pre;
    Node *adj;

public:

    void insert(); // given position, head and tail too
    void remove(); // give, position, head/ tail
    void replace();
    void sort();
    void lookup(); 
    void iterator(); // takes a variable wih value used to move number of nodes both forward and backwrds
    void interface(); 
    

}
*head= NULL,
*tail= NULL,
*temp= NULL,
*current= nullptr
;


int main(){


    Node n;
    n.insert();
    n.insert();
    n.insert();
    n.lookup();

    std::cout<<"before sort";

    n.sort();
    n.lookup();

    return 0;
}

void Node::insert(){
    int a=0;
    // first look if the head is empty
    // if theres only one node move forwardby one
    // starting and end nodes too
    if(head==NULL){
        std::cout<< "Empty head.. \n";
        std::cout<<"Enter Data: "; std::cin>>a; 
        head= new Node;
        head->data = a;
        tail=head;
        std::cout<< "Head node added..  Head == Tail\n\n";
    }else{

        int choice=1;
        std::cout<<"(DEFAULT) 1. To enter at the end. \nOR 2. For a preferred position.. \nOR 3. Add new head..\n";
        std::cin>> choice;

        if (choice==1){
            temp= new Node;
            std::cout<<"Enter Data: "; std::cin>>a; 
            temp->data=a;

            // checking the length
            if(head==tail){
                temp->pre= head;
                head->adj= temp;
                tail=temp;
            }else{
                // normal addition at the back
                temp->pre=tail;
                tail->adj=temp;
                tail=temp;
            }            
        }else{
            int pos=0;
            current->adj=head;
            int currPos=1;
            std::cout<<"Enter position number.. "; std::cin>>pos;

            while(current != nullptr && currPos < pos){
                currPos++;
                current=current->adj;
            }

            if (current != nullptr && currPos == pos){
                // linking and delinking
                std::cout<<"Enter Data: "; std::cin>>a;
                temp->data=a; 
                temp->pre= current->pre;
                temp->adj=current;
                current->pre= temp;
            }
        }
    }
}


// !
void Node::remove(){
    int d=0;
    current=head;
    std::cout<<"enter data to remove: "; cin>>d;

    while(current){
        current=current->adj;
        
        if (current->data == d){
            current->adj->pre = current->pre; 
            current->pre->adj = current->adj;
            delete (current);
            std::cout<< "node deleted";
            break;
        }
    }
}


void Node::lookup(){

    current=head;

    while(current->adj!=nullptr){
        std::cout<< current->data << " ->";
        current=current->adj;
    }
}

// ! 
void Node::sort(){
    // bubble

    current = head;
    int temp;

    while(current){
        if (current->data > current->adj->data){
            temp = current->data;
            current->data = current->adj->data;
            current->adj->data = temp;

            current = current->adj;
        }   else{
            current = current->adj;
        }
    }
}



/*

? adding linking and displaying happening as expected
* need a pointer to be passed as argument for a single pointer to work as iterative key - has current position

*/