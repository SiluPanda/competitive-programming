#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void printList(Node * head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void insert(Node *head, int data){
    if(head == NULL){
        head = new Node(data);
    }
    Node *p = head;
    while(p->next != NULL){
        p = p->next;
    }
    Node *ret = new Node(data);
    p->next = ret;
    
}

void moveToFront(Node * &head){
    if(head == NULL || head->next == NULL){
        return;
    }
    Node *p = head;
    while(p->next->next != NULL){
        p = p->next;
    }
    Node *temp = p->next;
    p->next = NULL;
    temp->next = head;
    head = temp;
}

int main(){
    Node *head = new Node(1);
    insert(head, 2);
    insert(head, 3);
    printList(head);
    moveToFront(head);
    printList(head); 
    
}