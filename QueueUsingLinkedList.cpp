#include <bits/stdc++.h>
using namespace std;

class QueueNode{
    int data;
    QueueNode* next;
    public:
    QueueNode(int x){
        data=x;
        next=nullptr;
    }
    void enqueue(QueueNode* &head, int x){
        QueueNode* newNode=new QueueNode(x);
        if(head==nullptr){
            head=newNode;
            return;
        }
        QueueNode* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newNode;
    }
    void dequeue(QueueNode* &head){
        if(head==nullptr){
            cout<<"Queue is empty"<<endl;
            return;
        }
        QueueNode* temp=head;
        head=head->next;
        delete temp;
    }
    void peek(QueueNode* head){
        if(head==nullptr){
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<"Front element is: "<<head->data<<endl;
    }
    void display(QueueNode* head){
        if(head==nullptr){
            cout<<"Queue is empty"<<endl;
            return;
        }
        QueueNode* temp=head;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    QueueNode* head=nullptr;
    QueueNode q(0);
    q.enqueue(head,10);
    q.enqueue(head,20);
    q.enqueue(head,30);
    q.display(head);
    q.peek(head);
    q.dequeue(head);
    q.display(head);
    return 0;
}