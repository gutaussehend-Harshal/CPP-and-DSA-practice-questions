	// ListNode* reverseList(ListNode* head) {

	// 	if(head == NULL || head->next == NULL) return head; // it is always suggested to use this condition in LinkedList based questions (improves the time complexity a lot).

	// 	ListNode* curr = head;
	// 	ListNode* prev = NULL;
	// 	ListNode* n;

	// 	while(curr != NULL){
	// 		n = curr->next;
	// 		curr->next = prev;
	// 		prev = curr;
	// 		curr = n;
	// 	}

	// 	return prev;

	// }