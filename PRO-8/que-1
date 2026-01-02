#include <iostream>
using namespace std;

class Node // class of node
{
public:
    int data;
    Node *next;

    Node(int val) // constructor
    {
        data = val;
        next = NULL;
    }
};

// LinkedList class

class LinkedList
{
    Node *head;

public:
    LinkedList() // constructor
    {
        head = NULL;
    }

    // Insert at beginning

    void insert_at_beginning(int val)
    {
        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    // Search a value

    bool search(int key)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == key)
                return true;
            temp = temp->next;
        }
        return false;
    }

    // Delete a node by value

    void delete_node(int key)
    {
        if (head == NULL)
            return;

        if (head->data == key)
        {
            Node *toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }

        Node *temp = head;
        while (temp->next != NULL && temp->next->data != key)
        {
            temp = temp->next;
        }

        if (temp->next == NULL)
            return; // not found

        Node *toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }

    // Reverse the linked list

    void reverse()
    {
        Node *prev = NULL;
        Node *curr = head;
        Node *nextNode = NULL;

        while (curr != NULL)
        {
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        head = prev;
    }

    // Display the list

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

// Main function

int main()
{
    LinkedList list;
    int choice, value, key;

    do
    {
        cout << "\n=== Linked List Menu ===\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Search\n";
        cout << "3. Delete Node\n";
        cout << "4. Reverse List\n";
        cout << "5. Display List\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to insert: ";
            cin >> value;
            list.insert_at_beginning(value);
            break;
        case 2:
            cout << "Enter value to search: ";
            cin >> key;
            if (list.search(key))
                cout << "Value found!\n";
            else
                cout << "Value not found!\n";
            break;
        case 3:
            cout << "Enter value to delete: ";
            cin >> key;
            list.delete_node(key);
            break;
        case 4:
            list.reverse();
            break;
        case 5:
            cout << "Current List: ";
            list.display();
            break;
        case 6:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 6);

    return 0;
}
