#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next=NULL;
Node(int k){
    data=k;
    next=NULL;
}
};
void display(Node *head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    Node *head=new Node(9);
    Node *first=new Node(10);
    head->next=first;
    Node *second=new Node(11);
    first->next=second;
    display(head);
}
