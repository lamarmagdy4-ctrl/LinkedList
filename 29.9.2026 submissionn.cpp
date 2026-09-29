// question 1

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value); {
        data = value
        next = nullptr;
    }    
};

class LinkedList {
public:
    Node* head;
    LinkedList();
        head = nullptr;
    }
    ~LinkedList() { // deallocate all nodes
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp 
        }
    }   

    void insertAtHead(int value); {
        Node* newNode = new Node(value);

        newNode->next head;
        head = newNode;
    }

    void insertAtTail(int value); {
        Node* newNode = new Node(value);

        if(head == nullptr) {
            head = newNode;
            return;
        }

        Node* current = head;
        while(current->next != nullptr) {
            current = current->next;
        }

        current->next = newNode;
    }

    bool deleteValue(int value); {// return false if not found
        if(head == nullptr) {
            return false;
        }

        if (head->data == valye) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return true;
        }
    }

        Node* current = head; {

        while(current->next != nullptr) {
            if (current->next->data == value) {
                Node* temp= current->next;
                current->next = current->next->next;
                delete temp;
                return true;
            }

            current = current-> current->next;
        }
    }

    bool search(int value); { // return true if found
        Node* current = head;

        while (current != nullptr) {
            if (current != nullptr) {
                return true;
            }
            current = current->next;
        }

        return false;
    }
    
    
    int length(); {
        int count = 0;
        Node* current = head;

        while(current != nullptr) {
            count++;
            current = current->next;
        }

        return count;
    }

    void reverse(); {
        Node* previous = nullptr;
        Node* current = head;
        Node* next = nullptr;
    
        while (current != nullptr) {
            next = current-> = previous;
            current->next = previous;
            previous = current;
            current = next;
        }

        head = previous; 

    }

    void print(); {
        Node* current = head;

        while (current != nullptr) {
            cout << current->data<< " -> ";
            current = current-> next;
        }

        cout << "null" << endl;
    }    
);