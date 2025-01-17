
#include <iostream>
#include <cstring>

class list {
    private:
        int id;
        int data;
        list *next;

    public:
        list(int a); // constructor
        ~list(); // destructor
        void insert(int a);
        void update(); // updates 
        void remove();
        void look(); // searches up
        void sort(); // sorts based on parameters generic temp needed 
        void display();

}
*head = nullptr, 
*tail = nullptr, 
*temp = nullptr, 
*pointer = nullptr;

list::list(int a) {
    id = 0;
    data = a;
    next = nullptr;
}

list::~list() {
    list *current = head;
    while (current) {
        list *next = current->next;
        delete current;
        current = next;
    }
}

void list::insert(int a) {

    if (head == nullptr) {
        head = new list(a); // node init
        tail = head; // single node in list 
    } else {
        temp = new list(a);
        if (head == tail) {
            head->next = tail;
            tail = temp;
            tail->id = ++id;
        } else {
            tail->next = temp;
            temp->id = ++id;
            tail = temp;
            // inquire about the id number of last node and increase by one 
        }
    }        
}

void list::update() {

    int num, upd;
    std::cout << "Enter node id: ";
    std::cin >> num;

    list *current = head;

    while (current->id != num && current->next != nullptr) {
        current = current->next;
        if (current->next == nullptr) std::cout << "node invalid"; else {
            std::cout << "Node Found...";
            std::cout << "Enter new value: "; std::cin >> upd;
            current->data = upd; 
        }
    }
}


void list::remove(){
    int op; 
    list* current=head;
    std::cout<<"Enter node id to be removed: "; std::cin>>op;
    while(current->id= op)
    {
        
    }

}

void list::display() {

    list *current = head;
    while (current) {
        std::cout << current->id; std::cout << "\t"; std::cout << current->data << std::endl;
        current = current->next;   
    }
}


int main() {
    list l();
    l.insert(43);
    l.insert(645);
    l.insert(23);
    l.insert(44);
    l.display();

    return 0;
}
