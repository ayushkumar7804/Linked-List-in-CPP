//Ayush Yadav
//24070123028

#include<iostream>
using namespace std;

class Link{
    public:
    int data;
    Link* next;

    Link(int data){
        this->data = data;
        next = NULL;
}
};
void insert_head(Link* &head, int data){
    Link* n = new Link(data);
    n->next = head;
    head = n;
}
void display(Link* head){
    Link* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}

int main() {
    Link* head = NULL;
    insert_head(head, 30);
    display(head);
    insert_head(head, 32);
    display(head);
    insert_head(head, 35);
    display(head);
    return 0;

}

/* OUTPUT:
10->
20->10->
30->20->10->
    */
