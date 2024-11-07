#include<iostream>
using namespace std;
struct node
{
    int info;
    struct node*link;
}*head=NULL,*tail=NULL;
int main()
{//creating
    char c='y';
    while(c=='y'){


    if(head==NULL){
        head=new node;
        cin>>head->info ;
        head->link=NULL;
        tail=head;
    }
    else{
        node*temp=new node;
        cin>>temp->info ;
        temp->link=NULL;

        tail->link=temp;
        tail=temp;
    }
    cout<<"conty/n" ;
    cin>>c; }

    //display
    tail=head;
    while (tail!=NULL){
        cout<<tail->info;
        tail=tail->link;
    }
    return 0;

}