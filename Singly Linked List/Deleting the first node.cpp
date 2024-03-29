
#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *link;
};

struct node *fun(struct node *ptr,int data)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;

    ptr->link=temp;

    return temp;
}



void print(struct node *ptr)
{
    int cnt=0;
    if(ptr==NULL)
    {
        cout<<"Linked List is Empty."<<endl;
        return;
    }
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        cnt++;
        ptr=ptr->link;
    }
    cout<<endl;
    cout<<"Total Element = "<<cnt<<endl;
    return;
}

///Deleting first node
struct node *del_first(struct node *head)
{
    struct node *ptr=head;

    head=head->link;
    free(ptr);
    ptr=NULL;
    return head;
}


int main()
{

    struct node *head=(struct node *)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current=head;
    current=fun(current,50);
    current=fun(current,500);
    current=fun(current,511);
    current=fun(current,512);


    ///Deleting the first node

    head=del_first(head);



    print(head);



}



