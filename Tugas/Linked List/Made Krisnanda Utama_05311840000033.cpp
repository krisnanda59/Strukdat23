#include <iostream>

using namespace std;

struct iT18{
    string nama, asal;
    int nrp;
    iT18 *prev;
    iT18 *next;
};

iT18 *head, *tail, *cur, *newNode, *afterNode;

void createiT18( string Nama, string Asal, int NRP ){
    head = new iT18();
    head->nama = Nama;
    head->asal = Asal;
    head->nrp = NRP;
    head->prev = head;
    head->next = head;
    tail = head;
}

void addFirst( string Nama, string Asal, int NRP ){
    if( head == NULL ){
        cout << "Linked List Not Exist" << endl;
    }else{
        newNode = new iT18();
        newNode->nama = Nama;
        newNode->asal = Asal;
        newNode->nrp = NRP;
        newNode->prev = tail;
        newNode->next = head;
        head->prev = newNode;
        tail->next = newNode;
        head = newNode;
    }
}

void addLast( string Nama, string Asal, int NRP ){
    if( head == NULL ){
        cout << "Linked List Not Exist" << endl;
    }else{
        newNode = new iT18();
        newNode->nama = Nama;
        newNode->asal = Asal;
        newNode->nrp = NRP;
        newNode->prev = tail;
        newNode->next = head;
        head->prev = newNode;
        tail->next = newNode;
        tail = newNode;
    }
}

void addMiddle( string Nama, string Asal, int NRP, int posisi ){
    if( head == NULL ){
        cout << "Linked List Not Exist" << endl;
    }else{
        if( posisi == 1 ){
            cout << "First Position Is Not In The Middle" << endl;
        }else if( posisi < 1){
            cout << "Position Out Of Range" << endl;
        }else{
            newNode = new iT18();
            newNode->nama = Nama;
            newNode->asal = Asal;
            newNode->nrp = NRP;

            cur = head;
            int nomor = 1;
            while( nomor < posisi - 1){
                cur = cur->next;
                nomor++;
            }

            afterNode = cur->next;
            cur->next = newNode;
            afterNode->prev = newNode;
            newNode->prev = cur;
            newNode->next = afterNode;
        }
    }
}

void printiT18()
{
    if( head == NULL ){
        cout << "Linked List Not Exist" << endl;
    }else{
        cout << "iT18 Data : " << endl;
        cout <<"----------------"<<endl;
        cur = head;
        while( cur->next != head ){

            cout << "Nama : " << cur->nama << endl;
            cout << "Asal : " << cur->asal <<endl;
            cout << "Nrp : " << cur->nrp <<endl<<endl;

            cur = cur->next;
        } 
        
        cout << "Nama : " << cur->nama << endl;
            cout << "Asal : " << cur->asal <<endl;
            cout << "Nrp : " << cur->nrp <<endl<<endl;

    }
}

int main(){
    
    createiT18("Reza Aisyi", "Samarinda", 36);
    printiT18();
    cout<<endl<<endl;

    addFirst("Indra Widnyana", "Denpasar", 31);
    printiT18();
    cout<<endl<<endl;

    addLast("Bayu Trianayasa", "Singaraja", 38);
    printiT18();
    cout<<endl<<endl;

    addMiddle("Nesya Kurniadewi", "Tabanan", 9, 2);
    printiT18();
    cout<<endl<<endl;
}
