// CPP code to illustrate Queue in
// Standard Template Library (STL)


#include <iostream>
#include <queue>
#include<cmath>
#include<stack>
#include <stdio.h>
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


//class Node{
//public:
//    int value;
//    Node* next;
//    Node* previus;
//};
//void printForward(Node*head){
//    Node* traverser = head;
//    while (traverser != nullptr){
//        cout<<traverser->value<<endl;
//        traverser = traverser->next;
//    }
//}
//void printBackward(Node*tail){
//    Node* traverser = tail;
//    while (traverser != nullptr){
//        cout<<traverser->value<<endl;
//        traverser = traverser->previus;
//    }
//}
//
//int main(){
//
//    Node* head;
//    Node* tail;
//// add first node
//    Node* node = new Node();
//    node->value = 4;
//    node -> next = nullptr;
//    node -> previus = nullptr;
//    head = node;
//    tail= node;
//
//    //add second node
//
//    node = new Node();
//    node->value = 43;
//    node -> next = nullptr;
//    node -> previus = tail;
//    tail ->next = node;
//    tail= node;
//
//   // add third node
//    node = new Node();
//    node->value = 423;
//    node -> next = nullptr;
//    node -> previus = tail;
//    tail ->next = node;
//    tail= node;
//
//    printForward(head);
//    printBackward(tail);
//
//    cin.get();
//}


//Binary treee
//struct Node{
//    int data;
//    Node* left;
//    Node* right;
//
//};
// Node* createNode(int data){
//
//     Node* newNode = new Node();
//
//     newNode->data = data;
//     newNode->left = newNode->right= nullptr;
//     return nullptr;
// }

//
// int main(){
//     Node* root= createNode(23);
//
//     root->left= createNode(32);
//     root->right= createNode(311);
//     root->left->left = createNode(4);
//     root->left->left = createNode(4);
//     root->right->left = createNode(4);
//     root->right->left = createNode(4);
//     root->right->right = createNode(4);
//     root->right->right = createNode(4);
//
//     root->left->right->left = createNode(232);
//     root->right->right->left = createNode(2232);
//
//
//
//
// }

//traversal function

//preorder algortihm
//struct Node{
//    int data;
//    Node* left;
//    Node* right;
//
//};
//Node* createNode(int data){
//
//    Node* newNode = new Node();
//
//    newNode->data = data;
//    newNode->left = newNode->right= nullptr;
//    return nullptr;
//}
//void printTree(Node* root){
//    if (root== nullptr)return;
//    cout << root -> data << endl;
//    printTree(root->left);
//    printTree(root->right);
//}
//
//int main() {
//    Node* root = createNode(23);
//
//    root->left = createNode(32);
//    root->right = createNode(311);
//    root->left->left = createNode(4);
//    root->left->left = createNode(4);
//    root->right->left = createNode(4);
//    root->right->left = createNode(4);
//    root->right->right = createNode(4);
//    root->right->right = createNode(4);
//
//    root->left->right->left = createNode(232);
//    root->right->right->left = createNode(2232);
//
//    printTree(root);
//
//    cin.get();
//
//
//}

//struct Node{
//    int data;
//    Node* left;
//    Node* right;
//
//};
//Node* createNode(int data){
//
//    Node* newNode = new Node();
//
//    newNode->data = data;
//    newNode->left = newNode->right= nullptr;
//    return nullptr;
//}
//void printTree(Node* root){
//    if (root == nullptr)return;
//
//    printTree(root->left);
//    cout << root -> data << endl;
//    printTree(root->right);
//}
//
//int main() {
//    Node* root = createNode(23);
//
//    root->left = createNode(32);
//    root->right = createNode(311);
//    root->left->left = createNode(4);
//    root->left->left = createNode(4);
//    root->right->left = createNode(4);
//    root->right->left = createNode(4);
//    root->right->right = createNode(4);
//    root->right->right = createNode(4);
//
//    root->left->right->left = createNode(232);
//    root->right->right->left = createNode(2232);
//
//    printTree(root);
//
//    cin.get();
//
//
//}

//sorting quick sort
//int partition(int arr[], int start, int end)
//{
//
//    int pivot = arr[start];
//
//    int count = 0;
//    for (int i = start + 1; i <= end; i++) {
//        if (arr[i] <= pivot)
//            count++;
//    }
//
//    // Giving pivot element its correct position
//    int pivotIndex = start + count;
//    swap(arr[pivotIndex], arr[start]);
//
//    // Sorting left and right parts of the pivot element
//    int i = start, j = end;
//
//    while (i < pivotIndex && j > pivotIndex) {
//
//        while (arr[i] <= pivot) {
//            i++;
//        }
//
//        while (arr[j] > pivot) {
//            j--;
//        }
//
//        if (i < pivotIndex && j > pivotIndex) {
//            swap(arr[i++], arr[j--]);
//        }
//    }
//
//    return pivotIndex;
//}
//
//void quickSort(int arr[], int start, int end)
//{
//
//    // base case
//    if (start >= end)
//        return;
//
//    // partitioning the array
//    int p = partition(arr, start, end);
//
//    // Sorting the left part
//    quickSort(arr, start, p - 1);
//
//    // Sorting the right part
//    quickSort(arr, p + 1, end);
//}
//
//int main()
//{
//
//    int arr[] = { 9, 3, 4, 2, 1, 8 };
//    int n = 6;
//
//    quickSort(arr, 0, n - 1);
//
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//
//    return 0;
//}

// added by Manish Sharma



//int partition(int* arr, int start, int end)
//{
//    // assuming last element as pivotElement
//    int index = 0, pivotElement = arr[end], pivotIndex;
//    int* temp = new int[end - start + 1]; // making an array whose size is equal to current partition range...
//    for (int i = start; i <= end; i++) // pushing all the elements in temp which are smaller than pivotElement
//    {
//        if(arr[i] < pivotElement)
//        {
//            temp[index] = arr[i];
//            index++;
//        }
//    }
//
//    temp[index] = pivotElement; // pushing pivotElement in temp
//    index++;
//
//    for (int i = start; i < end; i++) // pushing all the elements in temp which are greater than pivotElement
//    {
//        if(arr[i] > pivotElement)
//        {
//            temp[index] = arr[i];
//            index++;
//        }
//    }
// all the elements now in temp array are order :
// leftmost elements are lesser than pivotElement and rightmost elements are greater than pivotElement
//
//
//
//    index = 0;
//    for (int i = start; i <= end; i++) // copying all the elements to original array i.e arr
//    {
//        if(arr[i] == pivotElement)
//        {
//            // for getting pivot index in the original array.
//            // we need the pivotIndex value in the original and not in the temp array
//            pivotIndex = i;
//        }
//        arr[i] = temp[index];
//        index++;
//    }
//    return pivotIndex; // returning pivotIndex
//}
//
//void quickSort(int* arr, int start, int end)
//{
//    if(start < end)
//    {
//        int partitionIndex = partition(arr, start, end); // for getting partition
//        quickSort(arr, start, partitionIndex - 1); // sorting left side array
//        quickSort(arr, partitionIndex + 1, end); // sorting right side array
//    }
//    return;
//}
//
//int main()
//{
//    int size = 9;
//    int arr[size] = {5, 12, 7, 1, 13, 2 ,23, 11, 18};
//
//    cout << "Unsorted array : ";
//    for (int i = 0; i < size; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    printf("\n");
//
//    quickSort(arr, 0, size - 1);
//
//    cout << "Sorted array : ";
//    for (int i = 0; i < size; i++)
//    {
//        cout << arr[i] << " ";
//    }
//
//    return 0;
//}


//template <typename T>
//class stack{
//private:
//    int maxSize;
//    int stackTop;
//    T *list;
//
//public:
//    explicit stack(int maxSize){
//        if(maxSize>=0)
//            this->maxSize = maxSize;
//        else {
//            cout << "Cannot create stack with negative size. \nCreating stack with size 100." << endl;
//            this->maxSize = 100;
//        }
//        initializeStack();
//    }
//    void initializeStack(){
//        list = new T[maxSize];
//        stackTop = 0;
//    }
//    bool isStackEmpty() const{
//        return stackTop == 0;
//    }
//    bool isStackFull() const{
//        return stackTop == maxSize;
//    }
//    void push(T val){
//        if(!isStackFull()){
//            list[stackTop] = val;
//            stackTop++;
//        }else cout << "The stack is full" << endl;
//    }
//    void pop(){
//        if(!isStackEmpty()) stackTop--;
//        else cout << "The stack is empty" << endl;
//    }
//    T top(){
//        if(stackTop != 0) return list[stackTop-1];
//        return -1;
//    }
//    int countStackElements() const{
//        return stackTop;
//    }
//    void destroyStack(){
//        delete [] list;
//        initializeStack();
//    }
//    ~stack(){
//        delete [] list;
//    }
//};
//
//int main(){
//    reverseName("Umar")
//    return
//}

//int bubbleSort(vector<float> &arr){
//    int N = 0;
//    for(int i = 0; i < arr.size(); i++){
//        bool flag = true;
//        for(int j = 0; j < arr.size() - 1;j++){
//            N++;
//            if(arr[j+1] < arr[j]) {
//                flag = false;
//                swap(arr[j+1], arr[j]);
//            }
//        }
//        if(flag) break;
//    }
//    return N;
//}
//
//int insSort(vector<float> & arr){
//    int N = 0;
//    for(int i =1; i < arr.size();i++){
//        int j = i - 1;
//        float temp = arr[i];
//        for(; j>=0; j--){
//            N++;
//            if(temp <= arr[j]){
//                arr[j + 1] = arr[j];
//            }else {
//                j++;
//                break;
//            }
//        }
//        if(j == -1) j++;
//        arr[j] = temp;
//    }
//    return N;
//}
//
//int selSort(vector<float> &arr){
//    int N = 0;
//    for(int i = 0; i < arr.size();i++){
//        float min = arr[i];
//        int index = i;
//        for(int j = i; j < arr.size(); j++){
//            N++;
//            if(arr[j] < min) {
//                min = arr[j];
//                index = j;
//            }
//        }
//        swap(arr[i],arr[index]);
//    }
//    return N;
//}








// Child Class:
//class Child {
//private:
//    int age;
//    string name;
//public:
//    Child *nextChild;
//
//    const int &getAge() const {
//        return age;
//    }
//
//    void setAge(const int &age) {
//        this->age = age;
//    }
//
//    const string &getName() const { return name; }
//
//    void setName(const string &name) {
//        this->name = name;
//    }
//};
//// Spouse Class:
//class Spouse {
//    int age;
//    string name;
//    int num_children;
//
//    Child *childHead;
//
//    void insertChildAtFront(int age, string name) {
//        Child *newChild = new Child;
//        newChild->setAge(age);
//        newChild->setName(name);
//        if (!childHead) childHead = newChild;
//        else {
//            newChild->nextChild = childHead;
//            childHead = newChild;
//        }
//    }
//
//public:
//
//    Spouse() {
//        cout << "Enter the number of childs ";
//        cin >> num_children;
//        if (num_children <= 0) num_children = 0;
//        else {
//            childHead = NULL;
//            childrenDetails();
//        }
//    }
//
//    const int &getAge() const {
//        return age;
//    }
//
//    void setAge(const int &age) {
//        this->age = age;
//    }
//
//    const string &getName() const { return name; }
//
//    void setName(const string &name) {
//        this->name = name;
//    }
//
//    void childrenDetails() {
//        int childAge;
//        string childName;
//        for (int i = 1; i <= num_children; i++) {
//            cout << "Enter the name of child " << i << " ";
//            cin >> childName;
//            cout << "Enter the age of child " << i << " ";
//            cin >> childAge;
//            insertChildAtFront(childAge, childName);
//        }
//    }
//
//    void printChildrenDetails() {
//        Child *tempHead = childHead;
//        int i = 1;
//        cout << name << endl;
//        if(num_children>0) {
//            while (tempHead) {
//                cout << "Name of child " << i << " is -> " << tempHead->getName() << " who is " << tempHead->getAge()
//                     << " year's old" << endl;
//                tempHead = tempHead->nextChild;
//                i++;
//            }
//        } else cout << "They haven't got children yet." << endl;
//    }
//    ~Spouse() {
//        Child *currChild = childHead;
//        while (currChild) {
//            childHead = currChild->nextChild;
//            delete currChild;
//            currChild = childHead;
//        }
//    }
//};
//// Employee Class:
//struct Employee {
//    bool isSpouseAvailable;
//    string employee_name, designation, email;
//    int employee_id, age;
//    Employee *nextEmployee;
//
//    Employee() {
//        cout << "Enter 1 if employee is married, 0 otherwise" << endl;
//        cin >> isSpouseAvailable;
//        spouseLink = NULL;
//        if (isSpouseAvailable) {
//            spouseLink = new Spouse;
//            spouseDetails();
//        }
//    }
//
//
//    ~Employee() {
//        delete spouseLink;
//    }
//
//    void printChildrenDetails() {
//        if(isSpouseAvailable)
//            spouseLink->printChildrenDetails();
//        else cout << "nobody since he hasn't married yet!!!)" << endl;
//    }
//
//private:
//    Spouse *spouseLink;
//
//    void spouseDetails() {
//        string tempName;
//        int tempAge;
//        cout << "Enter the name of Spouse of Employee " << employee_name << " ";
//        cin >> tempName;
//        cout << "Enter her age ";
//        cin >> tempAge;
//        spouseLink->setName(tempName);
//        spouseLink->setAge(tempAge);
//    }
//
//};
//// List Class:
//struct List {
//    List() {
//        head = NULL;
//    }
//
//    void insertEmployeeAtFront(const string &employee_name, const string &designation, const string &email,
//                               const int employee_id, const int age) {
//        Employee *newEmployee = new Employee;
//        newEmployee->employee_name = employee_name;
//        newEmployee->designation = designation;
//        newEmployee->email = email;
//        newEmployee->employee_id = employee_id;
//        newEmployee->age = age;
//        if (!head) head = newEmployee;
//        else {
//            newEmployee->nextEmployee = head;
//            head = newEmployee;
//        }
//
//    }
//
//    void printAllEmpChildDetails() {
//        Employee *tempHead = head;
//        while (tempHead) {
//            cout << "Details about the children of the Employee " << tempHead->employee_name << " whose spouse is ";
//            tempHead->printChildrenDetails();
//            tempHead = tempHead->nextEmployee;
//        }
//    }
//
//private:
//    Employee *head;
//};
// main function:
//int main() {
//    List list1;
//    list1.insertEmployeeAtFront("Saydullo", "asd", "asd@asd.com", 210057, 19);
//    list1.insertEmployeeAtFront("Someone", "asd", "asd@asd.com", 210057, 19);
//    list1.printAllEmpChildDetails();
//    return 0;
//}



