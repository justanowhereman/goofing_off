#include<iostream>
#include<string.h>

using namespace std;

class node{
public:
    int data;
    node *next;
};

class func : public node{
public:
    void addSimp(int a);
    void addBeg(int a);
    void addLOC(int a, int b);
    void deleteLOC(int loc);
    void print();

    node *head=NULL, *tail=NULL, *temp, *current=nullptr, *traverser= nullptr;
};

void func::addSimp(int a){
    if(head==NULL) {
        temp=new node;
        temp->data=a;
        head=temp;
        tail=temp;
    }
    else{
        temp=new node;
        temp->data=a;
        tail->next=temp;
        tail=temp;
    }
}

void func::addBeg(int a){
    if (head==NULL){
        cout<<"Empty list.";
    }
    else{
        current=head;
        temp=new node;
        temp->data=a;
        temp->next=head;
        temp=head;
    }
}

void func::addLOC(int a, int b){
    // a = data b is the location
    current=head;
    temp=new node;
    temp->data=a;
    temp->next=NULL;

    for (int i=0;i<b-1 && current!=nullptr;i++)
    {
        current=current->next;
    }

    temp->next=current->next;
    current->next=temp;
}

void func::deleteLOC(int loc){
    node* prev = nullptr;
    current=head;
    for (int i = 1; i < loc && current!=nullptr; i++){
        prev = current;
        current = current->next;
    }
    prev->next = current->next;
    delete current;
}

void func::print(){
    current=head;
    while(current != NULL){
        cout<<current->data<<endl;
        current = current->next;
    }
}

int main()
{
    func f1;
    f1.addSimp(32);
    f1.addSimp(12);
    f1.addSimp(53);
    f1.addSimp(93);
    f1.addSimp(11);
    //f1.addLOC(63,3);
    //f1.addLOC(665,4);
    f1.print();
    //f1.deleteLOC(2);
    cout<<"\n\n";
    f1.addBeg(63);
    f1.print();

    return 0;
}
