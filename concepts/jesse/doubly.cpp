#include <iostream>
#include <string.h>

using namespace std;

class Node{

    int data;
    Node *pre;
    Node *adj;

    Node(int data){
        this-> data=data;
        this-> pre= nullptr; //previous pointer
        this-> adj= nullptr; // adjacent node
    } 
    ~Node();

public:

    void insert(int a); // given position, head and tail too
    void remove(); // give, position, head/ tail
    void lookup(); 
    void sort();
    void interface(); 
    

}
*head= NULL,
*tail= NULL,
*temp= NULL,
*current= nullptr
;


int main(){


    Node n;
    n.insert(1);
    n.insert(4);
    n.insert(6);

    return 0;
}

void Node::insert(int a){

    // first look if the head is empty
    // if theres only one node move forwardby one
    // starting and end nodes too
    if(head==NULL){
        std::cout<< "Empty head.. \n";
        head= new Node;
        head->data = a;
        tail=head;
        std::cout<< "Head node added..  Head == Tail";
    }else{

        int choice=1;
        std::cout<<"(DEFAULT) 1. To enter at the end. \nOR 2. For a preferred position.. \nOR 2. Add new head..\n";
        std::cin>> choice;

        if (choice==1){
            temp= new Node;
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
            current=head;
            int currPos=1;
            std::cout<<"Enter position number.. "; std::cin>>pos;

            while(current != nullptr && currPos < pos){
                current=current->adj;
                current++;
            }

            if (current != nullptr && currPos == pos){
                // linking and delinking
                temp->pre= current->pre;
                temp->adj=current;
                current->pre= temp;
            }
        }
    }
    // sub funtions for positions 
}