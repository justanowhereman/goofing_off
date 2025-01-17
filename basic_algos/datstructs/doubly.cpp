#include<iostream>
#include<string.h>

int a=0;

using namespace std;

class Node{
public:

    int data=0;
    int id=0; // is this dumb?
    Node *next=nullptr;
    Node *prev=nullptr;

    void insert (); // penetrates 
    void insert_at_pos(); 
    void remove_at_pos();
    void replace();
    void display();
    void menu(); // switch cases not ifs elses

}
*head=NULL,
*tail=NULL,
*temp=NULL,
*current=nullptr;

int main(){

    Node n;
    n.insert();
    n.insert();
    n.insert();
    n.insert();
    n.display();

    cout<<"\npos insert";
    n.insert_at_pos();
    n.display();

    return 0;
}

void Node::insert(){

    // standard inserting working correctly by the pos insertion is fucked up

    /* checks
        1. is the list empty (head=tail=null)
        2. is there only one node (head=tail=null)
        3. are there nodes already
        4. validations of data put
     */

        if (head==NULL){
            head= new Node;
            cout<<"enter data head empty: ";cin>>a;
            head->data=a;
            head->next=nullptr;
            head->prev=nullptr;
            head->id=1;
            tail=head;
        }else if(head==tail){
            cout<<"enter new data: ";cin>>a;
            temp= new Node; //inits node
            temp->data=a; // takes data from a and spits in temps data's mouth
            temp->next=nullptr; // since it's only the second node setting next as null is good
            head->next=temp; // heads cocks towards temp
            temp->prev=head; // temp cocks back at head
            temp->id=2;
            tail=temp; // temp is now an entirely new man
        }else{
            cout<<"enter data: ";cin>>a;
            temp= new Node;
            temp->data=a;
            temp->id=tail->id+1;
            temp->next=nullptr;
            tail->next=temp;
            tail=temp;
        }
     
}

void Node::insert_at_pos(){
    // TODO: havent got around to iding yet. 
    // this will be bloaty but who the fuck cares
    // further validations for head and tails node insertion remains
    
    int pos=0;
    int a=0; // will pass it in the function when the menu is made

    cout<<"Enter pos: "; cin>> pos;
    current=head;

    while(current != nullptr && pos!=current->id){ // as long as current isnt lonely and doesnt reach pos
    // this code is cursed but get to the logic first
        current=current->next;
    }

    cout<<"Destination reached now enter data: "; cin>>a;
    temp = new Node;
    temp -> data = a;
    temp->id=pos;

    temp->next= current; // linking updates
    temp->prev= current;
    current->prev->next=temp;
    current->prev=temp;

    // id updation

    Node *idUp = temp->next;

    while(idUp!=nullptr){
        idUp->id++;
        idUp=idUp->next;
    }
    
/* 
 
 */
  }

  void Node:: remove_at_pos(){
    // this remians the issue
    // TODO: this will also edit the ids so need to get to that :/
    int pos=0;
    int i=0;

    cout<<"Enter Position "; cin>>pos;
    
    current=head; 
    while(current!=nullptr && current->id!=pos){
        current=current->next;
    }

    // sends the fucker to the shadow realm
    current->prev->next=current->next;
    current->next->prev=current->prev;
    delete(current);
    cout<<"\ndata delete huzzah!";


  }

  void Node::display(){
    current=head;

    if (head==NULL){
        cout<<"List Empty.";
    } else{
    while(current!=nullptr){
        cout<<current->data <<"  " <<"id: " <<current->id<<endl;
        current=current->next;
        }
    }
  }