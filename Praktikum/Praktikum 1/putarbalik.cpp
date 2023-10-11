#include <iostream>

using namespace std;

struct snode {
  int data;
  snode* next;
};

snode* createsnode(int data) {
  snode* newsnode = new snode();
  newsnode->data = data;
  newsnode->next = nullptr;
  return newsnode;
}

void addsnode(snode* &head, int data) {
  snode* newsnode = createsnode(data);
  newsnode->next = head;
  head = newsnode;
}

void printList(snode* head) {
  snode* currentsnode = head;
  while (currentsnode != nullptr) {
    cout << currentsnode->data << " ";
    currentsnode = currentsnode->next;
  }
  cout << endl;
}

int main() {
  snode* head = nullptr;

  int input;
  

  while (cin >> input && input != 0) {
    addsnode(head, input);
    
  }

  printList(head);

  return 0;
}
