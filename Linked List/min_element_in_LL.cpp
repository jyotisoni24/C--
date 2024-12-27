int Maxi(Node *head){
		int maxi = head -> data;
		int mini = head -> data;
		Node *curr = head;
		while(curr != NULL){
			if(curr -> data > maxi)  maxi = curr -> data;
			if(curr -> data < mini)  mini = curr -> data;
			curr = curr -> next ;
			}
		return maxi;// For maximum element
        return mini; // For minimum element 
}
