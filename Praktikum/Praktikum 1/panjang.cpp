#include <iostream>

using namespace std;

typedef struct snode {
    int data;
    struct snode* next;
} SListNode;

int main() {
    SListNode* head = NULL;
    SListNode* current = NULL;

    int bilangan;
    int totaljarak = 0;
    while (true) {
        cin >> bilangan;
        if (bilangan == 0) {
            break;
        }

        SListNode* newNode = new SListNode;
        newNode->data = bilangan;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            current = newNode;
        } else {
            current->next = newNode;
            current = newNode;
        }

        totaljarak++;
    }

    cout << totaljarak << endl;

    current = head;
    while (current != NULL) {
        SListNode* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
