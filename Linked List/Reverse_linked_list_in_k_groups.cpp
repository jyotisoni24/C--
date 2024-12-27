#include <bits/stdc++.h>
using namespace std;
    Node* findkthNode(Node* head , int k){
        Node* curr = head;
        while(k != 0 && curr != NULL){
            k--;
            curr = curr -> next;
        }
        return curr;
    }
    Node* reverse(Node* head){
        Node* curr = head;
        Node* prev = NULL;
        while(curr != NULL){
            Node* temp = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
int main(){
    list<int> l;
    Node* temp = head;
    Node* prevNode = NULL;
    while(temp != NULL){
        Node* kthNode = findKthNode(temp , k);//kth Node ko findout kiya
        if(kthNode == NULL){
            if(prevNode) prevNode -> next = kthNode;//if prevNode present hai jo ki first reversal ke time nhi hogi to uske next ko kthNode se connect karna hai
            break;
        }
        Node* nextNode = kthNode -> next;//next Node mein kth node next ki vale dal ke preserve kar lo
        kthNode -> next = NULL;//ab pointer break karke usko connect kar do null se
        reverse(temp);//ab jo linkedlist banayi hai usko reverse kar do
        if(temp == head){//first reversal ka case
            head = kthNode;//isme kth node ko hi head bana do
        }
        else{
            prevNode -> next = kthNode;//else prev node ke next ko connect kar do kth node se
        }
        prevNode = temp;//temp yani ki purani node usko prevnode bana do
        temp = nextNode ;// next node ko temp bana do
    }
}