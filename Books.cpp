#include<bits/stdc++.h>

using namespace std;



int main(){
    int n,t;
    cin>>n>>t;

    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i=0, j=0, sum=0;

    int ans=INT_MIN;

    while(j<n){

        sum+=arr[j];

        while (sum>t && i <= j) {
            sum -= arr[i];
            i++;
        }

        if (sum<= t) {
            ans = max(ans, j-i+1);
        }

        j++;

    }

    cout<<ans<<endl;

}

// class Node{
// public:
//     int data;
//     Node *next=nullptr;

//     Node(int data){
//        this->data=data; 
//     }


//    Node* insertNode(Node* head, int pos, int data) {
//     Node* newNode = new Node(data);

   
//     if (pos == 0) {
//         newNode->next = head;
//         head = newNode;
//         return head;
//     }

//     Node* temp = head;
 
//     for (int i = 0; temp != nullptr && i < pos - 1; i++) {
//         temp = temp->next;
//     }

   
//     if (temp == nullptr) {
       
//         delete newNode; 
//         return head;
//     }

  
//     newNode->next = temp->next;
//     temp->next = newNode;

//     return head;
// }


//     void printList(Node *head){
//         Node* temp=head;

//         while(temp!=nullptr){
//             cout<<temp->data<<"-> ";
//             temp=temp->next;
//         }
//     }


//     Node * swapNodes(Node * head){

//         Node* first=head; 
//         Node *second = head->next;

//         while(second && first){

//             first->next=second->next;
//             second->next=first;
//             head=second;

//             first=first->next;
//             second=second->next;
//         }


//     }
// };






// int main(){

//     int u_data;
//     cin>>u_data;

//     Node *node = new Node(u_data);

//     Node *head = node->insertNode(node, 1, 32);

//     for(int i=0;i<5;i++){
//         head=node->insertNode(node,i+2,i);
//     }

//     node->printList(head);

// }