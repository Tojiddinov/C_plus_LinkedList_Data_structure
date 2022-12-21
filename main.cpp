// CPP code to illustrate Queue in
// Standard Template Library (STL)


#include <iostream>
#include <queue>
#include<stack>

using namespace std;

// Print the queue
//void showq(queue<int> gq)
//{
//    queue<int> g = gq;
//    while (!g.empty()) {
//        cout << '\t' << g.front();
//        g.pop();
//    }
//    cout << '\n';
//}
//
// Driver Code
//int main()
//{
//    queue<int> gquiz;
//    gquiz.push(10);
//    gquiz.push(20);
//    gquiz.push(30);
//
//    cout << "The queue gquiz is : ";
//    showq(gquiz);
//
//    cout << "\ngquiz.size() : " << gquiz.size();
//    cout << "\ngquiz.front() : " << gquiz.front();
//    cout << "\ngquiz.back() : " << gquiz.back();
//
//    cout << "\ngquiz.pop() : ";
//    gquiz.pop();
//    showq(gquiz);
//
//    return 0;'
//}

//void printQueue(queue<int> queue){
//    while (!queue.empty()){
//        cout<< queue.front()<<"";
//        queue.pop();
//
//    }
//    cout<<endl;
//}
//int main(){
//    queue<int>myQueue;
//    myQueue.push(1);
//    myQueue.push(2);
//    myQueue.push(43);
//
//    cout<<"SIZE IS" << myQueue.size()<<endl;
//    cout<<"First elemnt is:" <<myQueue.front()<<endl;
//    cout<<"Last elemnt is:" <<myQueue.back()<<endl;
//
//    cout <<"My queue: "<<endl;
//    printQueue(myQueue);
//
//    system("pause>0");
//
//
//
//}

//class Node{
//public:
//    int Value;
//    Node* Next;
//
//};
//void printList(Node*n){
//    while (n!=NULL){
//        cout<< n ->Value<<endl;
//        n=n->Next;
//    }
//
//}
// int main(){
//     Node* head = new Node();
//     Node* second = new Node();
//     Node* third = new Node();
//
//     head ->Value = 1;
//     head ->Next = second;
//     second ->Value = 23;
//     second -> Next = third;
//     third -> Value =34;
//     third -> Next = NULL;
//
//     printList(head);

//
//
// }

//linked list start

//class Node{
//public:
//    int Value;
//    Node* Next;
//
//};
//void printList(Node*n){
//    while (n!=NULL){
//        cout<< n ->Value<<endl;
//        n=n->Next;
//    }
//
//}
//void InsertAtTheFront(Node**head, int newValue){
//    //1 prepare a new node
//    Node* newNode = new Node();
//    newNode-> Value = newValue;
//    // 2 Put it in front of current head
//
//    newNode->Next = *head;
//    // 3movie head of the list to point to the newNode
//    *head = newNode;
//
//}
//int main() {
//    Node *head = new Node();
//    Node *second = new Node();
//    Node *third = new Node();
//
//    head->Value = 1;
//    head->Next = second;
//    second->Value = 23;
//    second->Next = third;
//    third->Value = 34;
//    third->Next = NULL;
//
//    InsertAtTheFront(&head, -1);
//    InsertAtTheFront(&head, -45);
//
//    printList(head);
//
//}

//class Node{
//public:
//    int Value;
//    Node* Next;
//
//};
//void printList(Node*n){
//    while (n!=NULL){
//        cout<< n ->Value<<endl;
//        n=n->Next;
//    }
//
//}
//void InsertAtTheFront(Node**head, int newValue){
//    //1 prepare a new node
//    Node* newNode = new Node();
//    newNode-> Value = newValue;
//    // 2 Put it in front of current head
//
//    newNode->Next = *head;
//    // 3movie head of the list to point to the newNode
//    *head = newNode;
//
//}
//void insertAtTheEnd(Node**head, int newValue){
//    // 1 Preapere a new node
//    Node*newNode = new Node();
//    newNode->Value = newValue;
//    newNode->Next = NULL;
//    //2 if linked list is empty new node will be a head node
//    if (*head  == NULL){
//        *head = newNode;
//        return;
//    }
//    // find the last node
//    Node* last =*head;
//    while(last->Next!=NULL){
//        last = last->Next;
//    }
//
//    // Insert New node after class node at the end
//    last ->Next =newNode;
//
//}
//int main() {
//    Node *head = new Node();
//    Node *second = new Node();
//    Node *third = new Node();
//
//    head->Value = 1;
//    head->Next = second;
//    second->Value = 23;
//    second->Next = third;
//    third->Value = 34;
//    third->Next = NULL;
//
//
//    insertAtTheEnd(&head, 4);
//    insertAtTheEnd(&head, 5);
//
//
//
//
//    printList(head);
//
//}

//class Node{
//public:
//    int Value;
//    Node* Next;
//
//};
//void printList(Node*n){
//    while (n!=NULL){
//        cout<< n ->Value<<endl;
//        n=n->Next;
//    }
//
//}
//void InsertAtTheFront(Node**head, int newValue){
//    //1 prepare a new node
//    Node* newNode = new Node();
//    newNode-> Value = newValue;
//    // 2 Put it in front of current head
//
//    newNode->Next = *head;
//    // 3movie head of the list to point to the newNode
//    *head = newNode;
//
//}
//void insertAtTheEnd(Node**head, int newValue){
//    // 1 Preapere a new node
//    Node*newNode = new Node();
//    newNode->Value = newValue;
//    newNode->Next = NULL;
//    //2 if linked list is empty new node will be a head node
//    if (*head  == NULL){
//        *head = newNode;
//        return;
//    }
//    // find the last node
//    Node* last =*head;
//    while(last->Next!=NULL){
//        last = last->Next;
//    }
//
//    // Insert New node after class node at the end
//    last ->Next =newNode;
//
//}
//void inserAfter(Node*previous, int newValue ){
//    // 1 Check if previus node is NULL
//    if (previous ==NULL){
//        cout<<"Previus node is NULL";
//        return;
//    }
//    // 2 Prepare a new Node
//    Node* newNode = new Node();
//    newNode ->Value = newValue;
//
//    // 3 Insert newNode after previus
//
//    newNode ->Next = previous->Next;
//    previous ->Next = newNode;
//
//
//}
//int main() {
//    Node *head = new Node();
//    Node *second = new Node();
//    Node *third = new Node();
//
//    head->Value = 1;
//    head->Next = second;
//    second->Value = 23;
//    second->Next = third;
//    third->Value = 34;
//    third->Next = NULL;
//
//
//    insertAtTheEnd(&head, 4);
//    insertAtTheEnd(&head, 5);
//    inserAfter(head, -1);
//    inserAfter(head, -41);
//    inserAfter(head, -14);
//    inserAfter(head, -44);
//
//
//
//
//
//    printList(head);
//
//}


//stack
// void printStackElemnt(stack<int>stack){
//     while(!stack.empty()){
//         cout<< stack.top()<<endl;
//         stack.pop();
//     }
//
// }
//int main(){
//    // empty size push pop top
//    stack<int>numberStack;
//    numberStack.push(1);
//    numberStack.push(57);
//    numberStack.push(157);
//    numberStack.pop();
//    numberStack.pop();
//    numberStack.pop();
//    numberStack.pop();
//
//    printStackElemnt(numberStack);
//
//
//    if (numberStack.empty())
//        cout <<"Stack is empty";
//    else
//        cout<<"Stack is not empty";
//    cout<<"stack size is "<< numberStack.size()<<endl;
//
//    system ("pause>0");
//
//}

//queue
//void printQueue(queue<int> queue){
//    while(!queue.empty())
//    {
//        cout<<queue.front()<<" ";
//        queue.pop();
//
//    }
//    cout<<endl;
//
//}
//int main(){
//    queue<int> myQueue;
//    myQueue.push(23);
//    myQueue.push(23);
//    myQueue.push(382);
//
//    cout<< "size is "<< myQueue.size()<<endl;
//    cout<<"first element"<< myQueue.front()<<endl;
//    cout<<" last elemen is"<< myQueue.back()<<endl;
//
//    cout <<"My queue: "<<endl;
//    printQueue(myQueue);
//
//    system("pause>0");
//
//
//}
//


class Node{
public:
    int value;
    Node* next;
    Node* previus;
};
void printForward(Node*head){
    Node* traverser = head;
    while (traverser != nullptr){
        cout<<traverser->value<<endl;
        traverser = traverser->next;
    }
}
void printBackward(Node*tail){
    Node* traverser = tail;
    while (traverser != nullptr){
        cout<<traverser->value<<endl;
        traverser = traverser->previus;
    }
}

int main(){

    Node* head;
    Node* tail;
// add first node
    Node* node = new Node();
    node->value = 4;
    node -> next = nullptr;
    node -> previus = nullptr;
    head = node;
    tail= node;

    //add second node

    node = new Node();
    node->value = 43;
    node -> next = nullptr;
    node -> previus = tail;
    tail ->next = node;
    tail= node;

   // add third node
    node = new Node();
    node->value = 423;
    node -> next = nullptr;
    node -> previus = tail;
    tail ->next = node;
    tail= node;

    printForward(head);
    printBackward(tail);

    cin.get();
}