//Ayush Yadav
//24070123028

#include <iostream>

using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val=data;
        next = NULL;
    }

    };

int main(){
    Node *l1  =new Node(6);
    cout<<l1->val<<"   "<<l1->next;
}


/*Output
   6   0 
   */
