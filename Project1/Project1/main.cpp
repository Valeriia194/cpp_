// LW 1,2
//_________________________________________________________________________

//#include <iostream>
//
//template <typename T>
//class Node {
//public:
//    T data;
//    Node* next;
//};
//
//template <typename T>
//class LinkedList {
//private:
//    Node<T>* head;
//    Node<T>* tail;
//public:
//    LinkedList() : head(nullptr), tail(nullptr) {}
//
//    void addToHead(T value) {
//        Node<T>* newNode = new Node<T>;
//        newNode->data = value;
//        newNode->next = head;
//        head = newNode;
//        if (tail == nullptr) {
//            tail = head;
//        }
//    }
//
//    void addToTail(T value) {
//        Node<T>* newNode = new Node<T>;
//        newNode->data = value;
//        newNode->next = nullptr;
//        if (tail == nullptr) {
//            head = tail = newNode;
//        }
//        else {
//            tail->next = newNode;
//            tail = newNode;
//        }
//    }
//
//    void deleteFromHead() {
//        if (head != nullptr) {
//            Node<T>* nodeToDelete = head;
//            head = head->next;
//            delete nodeToDelete;
//            if (head == nullptr) {
//                tail = nullptr;
//            }
//        }
//    }
//
//    void deleteFromTail() {
//        if (head != nullptr) {
//            if (head == tail) {
//                delete head;
//                head = tail = nullptr;
//            }
//            else {
//                Node<T>* temp;
//                for (temp = head; temp->next != tail; temp = temp->next);
//                delete tail;
//                tail = temp;
//                tail->next = nullptr;
//            }
//        }
//    }
//
//    void deleteAll() {
//        Node<T>* nextNode;
//        while (head != nullptr) {
//            nextNode = head->next;
//            delete head;
//            head = nextNode;
//        }
//        tail = nullptr;
//    }
//
//    void show() const {
//        for (Node<T>* temp = head; temp != nullptr; temp = temp->next) {
//            std::cout << temp->data << " ";
//        }
//        std::cout << std::endl;
//    }
// 
// void insertAt(int position, T value) {
//Node<T>* newNode = new Node<T>;
//newNode->data = value;
//if (position == 0) {
//    newNode->next = head;
//    head = newNode;
//    if (tail == nullptr) {
//        tail = head;
//    }
//}
//else {
//    Node<T>* prev = head;
//    for (int i = 0; i < position - 1; i++) {
//        if (prev == nullptr) return;
//        prev = prev->next;
//    }
//    newNode->next = prev->next;
//    prev->next = newNode;
//    if (newNode->next == nullptr) {
//        tail = newNode;
//    }
//}
//    }
//
//    void deleteAt(int position) {
//        if (position == 0) {
//            deleteFromHead();
//        }
//        else {
//            Node<T>* prev = head;
//            for (int i = 0; i < position - 1; i++) {
//                if (prev == nullptr) return;
//                prev = prev->next;
//            }
//            if (prev->next == nullptr) return;
//            Node<T>* nodeToDelete = prev->next;
//            prev->next = nodeToDelete->next;
//            delete nodeToDelete;
//            if (prev->next == nullptr) {
//                tail = prev;
//            }
//        }
//    }
//
//    int search(T value) {
//        Node<T>* temp = head;
//        int position = 0;
//        while (temp != nullptr) {
//            if (temp->data == value) {
//                return position;
//            }
//            temp = temp->next;
//            position++;
//        }
//        return -1;
//    }
//
//    int replace(T oldValue, T newValue) {
//        Node<T>* temp = head;
//        int count = 0;
//        while (temp != nullptr) {
//            if (temp->data == oldValue) {
//                temp->data = newValue;
//                count++;
//            }
//            temp = temp->next;
//        }
//        return count;
//    }
//
//    void reverse() {
//        Node<T>* prev = nullptr;
//        Node<T>* current = head;
//        Node<T>* next = nullptr;
//        while (current != nullptr) {
//            next = current->next;
//            current->next = prev;
//            prev = current;
//            current = next;
//        }
//        tail = head;
//        head = prev;
//    }
//};

//int main() {
//    LinkedList<int> list;
//
//    // Додавання елементів до голови та хвоста списку
//    list.addToHead(1);
//    list.addToTail(2);
//    list.addToHead(3);
//    list.addToTail(4);
//
//    list.show();  
//
//    list.deleteFromHead();
//    list.deleteFromTail();
//
//    list.show(); 
//
//    list.deleteAll();
//
//    list.show();  
//
//    return 0;
//}



// HW 1
//_________________________________________________________________________

//#include <iostream>
//
//template <typename T>
//class Node {
//public:
//    T data;
//    Node* next;
//};
//
//template <typename T>
//class Stack {
//private:
//    Node<T>* top;
//public:
//    Stack() : top(nullptr) {}
//
//    void push(T value) {
//        Node<T>* newNode = new Node<T>;
//        newNode->data = value;
//        newNode->next = top;
//        top = newNode;
//    }
//
//    void pop() {
//        if (top != nullptr) {
//            Node<T>* nodeToDelete = top;
//            top = top->next;
//            delete nodeToDelete;
//        }
//    }
//
//    T peek() const {
//        if (top != nullptr) {
//            return top->data;
//        }
//        else {
//            throw std::runtime_error("Stack is empty");
//        }
//    }
//
//    bool isEmpty() const {
//        return top == nullptr;
//    }
//};

//int main() {
//    Stack<int> stack;
//
//    stack.push(1);
//    stack.push(2);
//    stack.push(3);
//    stack.push(4);
//
//    std::cout << "Top of stack: " << stack.peek() << std::endl;  
//
//    stack.pop();
//    stack.pop();
//
//    std::cout << "Top of stack: " << stack.peek() << std::endl;  
//
//    return 0;
//}

// HW 2
//_________________________________________________________________________

template <typename T>
class LinkedList {
    // ... 

    LinkedList<T>* clone() {
        LinkedList<T>* newList = new LinkedList<T>;
        Node<T>* current = head;
        while (current != nullptr) {
            newList->addToTail(current->data);
            current = current->next;
        }
        return newList;
    }

    LinkedList<T>* operator+(const LinkedList<T>& other) {
        LinkedList<T>* newList = this->clone();
        Node<T>* current = other.head;
        while (current != nullptr) {
            newList->addToTail(current->data);
            current = current->next;
        }
        return newList;
    }

    LinkedList<T>* operator*(const LinkedList<T>& other) {
        LinkedList<T>* newList = new LinkedList<T>;
        Node<T>* current = head;
        while (current != nullptr) {
            Node<T>* otherCurrent = other.head;
            while (otherCurrent != nullptr) {
                if (current->data == otherCurrent->data) {
                    newList->addToTail(current->data);
                    break;
                }
                otherCurrent = otherCurrent->next;
            }
            current = current->next;
        }
        return newList;
    }
};
