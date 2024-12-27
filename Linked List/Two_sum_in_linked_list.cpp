#include <bits/stdc++.h>
using namespace std;
Node* tail(Node*head){
    Node* curr = head;
    while(curr != NULL){
        curr = curr -> next;
    }
    return curr;
}
int main(){
    vector<int , int > v;
    int sum;
    Node* left = head;
    Node* right = tail(head);
    while(left->val <= right -> val ){
        if((left -> val + right -> val) < sum) right = right -> prev;
        else if((left -> val + right -> val) > sum) left = left -> next;
        else {
            v.push_back({left -> val , right -> val});
            left = left -> next ;
            right = right -> prev; 
        }
    }
    return v;
}