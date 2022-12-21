// CPP code to illustrate Queue in
// Standard Template Library (STL)
#include <iostream>
#include <queue>

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

class Node{
public:
    int Value;
    Node* Next;

};
void printList(Node*n){
    while (n!=NULL){
        cout<< n ->Value<<endl;
        n=n->Next;
    }

}
void InsertAtTheFront(Node**head, int newValue){
    //1 prepare a new node
    Node* newNode = new Node();
    newNode-> Value = newValue;
    // 2 Put it in front of current head

    newNode->Next = *head;
    // 3movie head of the list to point to the newNode
    *head = newNode;

}
void InsertAtTheEnd(Node**head, int newValue){
    // 1 Preapere a new node
    //2 if linked list is empty new node will be a head node
    // find the last node
    // Insert New node after class node at the end
}
int main() {
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->Value = 1;
    head->Next = second;
    second->Value = 23;
    second->Next = third;
    third->Value = 34;
    third->Next = NULL;

//    InsertAtTheFront(&head, -1);
//    InsertAtTheFront(&head, -45);

    printList(head);

}

