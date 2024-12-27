#include <bits/stdc++.h>
using namespace std;
int main(){
    //Deleting duplicates from sorted linked list
    list<int> l;
    //TC = innerloop + outer loop = O(N)
    Node* curr = head;
    while(curr != NULL && curr-> next != NULL){ // till the last of DLL
        Node* Newnode = curr -> next;
        if(Newnode -> val == curr -> val && Newnode != NULL){
            Node* duplicate = Newnode; //storing duplicate node
            Newnode = Newnode -> next; // Newnode ko age lejake check kiya
            delete(duplicate);// duplicate ko delete kiya sirf c++ mein kar sakte hain
        }
        curr -> next =  Newnode;//curr ka next nextnode se connect kar diya jahan vo duplicate nhi hai
        if( Newnode != NULL) Newnode -> prev = curr;//prev ko curr se connect kar diya
        curr =  Newnode -> next;//phir curr ko new node ke baad se check kiya kyuki usse pehle ke to sare check kar liye
    }
}