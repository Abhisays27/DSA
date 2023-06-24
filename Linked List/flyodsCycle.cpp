// /*************************************************
    
//     class Node {
//         public :

//         int data;
//         Node *next;

//         Node(int data) {
//             this -> data = data;
//             this -> next = NULL;
//         }
//     };

// *************************************************/
// Node* detectLoop(Node* head){
//         if(head==NULL){
//             return NULL;
//         }
//         Node* slow = head;
//          Node* fast = head;
//          while(fast!=NULL && fast->next!=NULL){
//              slow=slow->next;
//              fast=fast->next->next;
//              if(slow==fast){
//                  break;
//              }
//          }
//          if(slow==fast){
//              return slow;
//          }
//          return NULL;

//     }

// Node* getStartingNode(Node* head){
//     if(head==NULL){
//         return NULL;
//     }
//     Node* intersection = detectLoop(head);
//     if(intersection==NULL){
//         return NULL;
//     }
//     Node* slow = head;
//     while(slow!=intersection){
//         slow=slow->next;
//         intersection=intersection->next;
//     }
//     return slow;
// }


// Node *removeLoop(Node *head)
// {
//     // Write your code here.
//      if(head==NULL){
//         return NULL;
//     }
//     if(getStartingNode(head)==NULL){
//         return head;
//     }
//     Node* temp = getStartingNode(head);
//     while(temp->next!=getStartingNode(head)){
//         temp=temp->next;
//     }
//     temp->next=NULL;
//     return head;
    
// }