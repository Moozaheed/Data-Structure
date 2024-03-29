#include<bits/stdc++.h>
using namespace std;

struct node{

struct node *prev;
int data;
struct node *next;

};

///Creating Head
struct node *CreateHead(struct node *head,int data)
{
 struct node *temp=(struct node *)malloc(sizeof(struct node));
 temp->prev=NULL;
 temp->data=data;
 temp->next=NULL;
 head=temp;
 return head;

}

///Insering New Node

void AddAtEnd(struct node *head,int data)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;

    while(head->next!=NULL)
    {
        head=head->next;
    }
    head->next=temp;
    temp->prev=head;
}
///Deleting Inermediate Node

struct  node *DelInter(struct node *head,int pos)
{
    while(pos>1)
    {
        head=head->next;
        pos--;
    }
    struct node *temp=head->prev;

    temp->next=head->next;
    head->next->prev=temp;
    free(head);
    head=NULL;
}


///Traversing A Doubly Linked List

void Traversing(struct node *head)
{
    while(head!=NULL)
    {

        cout<<head->data<<" ";
        head=head->next;
    }
}

int main()
{
    ///Creating Head
    struct node *head=CreateHead(head,45);
    //cout<<head->data<<endl;

    ///Inserting New Node At The End

    AddAtEnd(head,55);

    AddAtEnd(head,65);

    AddAtEnd(head,75);

    ///Traversing The Doubly Linked List
    Traversing(head);


    ///Deleting the First Node
    int pos=2;
    DelInter(head,pos);


    cout<<"\nAfter Deleting the "<<pos<<"nd Node"<<endl;
    Traversing(head);


}


