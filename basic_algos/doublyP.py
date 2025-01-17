class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None

class DoublyLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def insert(self, v):

        if self.head is None:
            temp = Node(v)
            self.head = self.tail = temp
        else:
            temp = Node(v)
            self.tail.next = temp
            temp.prev = self.tail
            self.tail = temp

"""     def sort(self):
        current = self.head
        temp = 0

        while current:
            if current.data > current.next.data:
                temp = current.data
                current.data = current.next.data
                current.next.data = current.data

 """
# Create a doubly linked list
dll = DoublyLinkedList()

# Insert some elements
dll.insert(1)
dll.insert(4)
dll.insert(0)

# Print the contents of the list
current = dll.head

while current:
    print(current.data, end=" -> ")
    current = current.next
print()
""" 
print("sorting")
dll.sort()

current = dll.head

while current:
    print(current.data, end=" -> ")
    current = current.next

print()
 """



"""
! remember to minkey patch the methods to the original node call

"""