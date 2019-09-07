#include<iostream>
using namespace std;


struct Node
{
    int value;
    Node *next;
};
        Node *start=NULL;

Node *newnode(int value){
    Node *node= new Node;
    node->value=value;
    node->next=NULL;

    return node;
}

Node *insertdata(int value){
    if (start==NULL)
    {
        return newnode(value);
    }
    Node *current=start;
    while (current->next !=NULL)
    {
        current=current->next;
    }
    current->next=newnode(value);
    return current;


}

 void printval(){
     Node *current=start;
     while(current !=NULL){
         cout<<current->value<<endl;
        current= current->next;
     }


 }
void deletenode(int value){

    if (start->value==value){
        start=start->next;
        return;
    }
    Node *current=start;
     while(current->next !=NULL){
        if (current->next->value==value)
        {
            current->next=current->next->next;
            break;
        }
        current=current->next;

     }
}


int main(){

    start=insertdata(10);
    insertdata(12);
    insertdata(14);
    insertdata(16);
    insertdata(18);
    cout<<"linked list before deleting value--\n";
    printval();
    deletenode(10);
        cout<<"linked list after deleting value--\n";

    printval();


    return 0;
}
