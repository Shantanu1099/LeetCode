```
//         Brute Force approach
ListNode* headCopy = head;
int count = 1;
//         Count the nodes in the linkedlist/ size of linkedList
while(headCopy != NULL && headCopy->next != NULL) {
count++;
headCopy = headCopy->next;
}
//         Assign headCopy to the head of the linked List i.e. the first node of the list
headCopy = head;
count /= 2;
while(count) {
count--;
head = head->next;
}
headCopy = head;
cout << count << " -  count" << endl;
return headCopy;
```