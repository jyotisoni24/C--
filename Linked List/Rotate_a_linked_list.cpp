#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int>l;
    Node* curr = head;
    int len = 1;
    int k ;//k=2
    while(curr -> next != NULL){//1 -> 2 -> 3 -> 4 -> 5
        len++;// len = 5
        curr = curr -> next;//curr become second last element of linkedlist // curr = 4
    }
    if( k % len == 0)
    k = k % len;//len = size of linked list so agar use len times rotate karenge then we will get the same linked list thatswhy we k divided it by k = 2 
    curr -> next = head; // Now last node ko connect kar diya head// 4 ko head bana diya
    Node* newLastNode = findNthNode(head , len-k);// and new last node ko search kiya through a function // 5-2 third element dhundha which 3 use newLastNode bana diya
    head = newLastNode -> next;//head update hua aur vo ban gya newlastNode ka next // head ban gaya newlast node ka next = 4
    newLastNode -> next = NULL;//new last node ko null se jod diya // 3 ko connect kar diya NULL se
}