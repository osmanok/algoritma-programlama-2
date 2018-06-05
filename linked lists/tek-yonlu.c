#include<stdio.h>
#include<stdlib.h>

int sayac=0;

typedef struct node{
    int data;
    struct node *next;
}node;

void listeleme(node *root){
    node *iter=root;
    while(iter!=NULL){
        printf("%d\t",iter->data);
        iter=iter->next;
    }
}

node *ekleme(node *root, int x){
    if(root==NULL){
        root=(node*)malloc(sizeof(node));
        root->data=x; root->next=NULL;
        return root;
    }
    node *iter=root;
    while(iter->next!=NULL) iter=iter->next;
    node *temp=(node*)malloc(sizeof(node));
    temp->data=x; temp->next;
    iter->next=temp; temp->next=NULL; temp->data=x;
    return root;
}

node *siraliekleme(node *root, int x){
    if(root==NULL){
        root=(node*)malloc(sizeof(node));
        root->data=x; root->next=NULL;
        return root; 
    }
    if(root->data>x){
        node *temp=(node*)malloc(sizeof(node));
        temp->next=root; temp->data=x;
        return temp;
    }
    node *iter=root;
    while(iter->next->data<x && iter->next!=NULL){
        iter=iter->next;
    }
    if(iter->next==NULL){
        node *temp=(node*)malloc(sizeof(node));
        iter->next=temp; temp->next=NULL; temp->data=x;
        return root;
    }
    node *temp=(node*)malloc(sizeof(node));
    temp->next=iter->next;
    iter->next=temp; temp->data=x;
    return root;
}

node *arama(node *root, int x){
    node *iter=root;
    while(iter->data!=x){
        iter=iter->next;
        sayac++;
    }
    return iter;
}

node *silme(node *root, int x){
    if(root->data==x){
        node *temp=(node*)malloc(sizeof(node));
        temp=root;
        root=root->next;
        free(temp);
        return root;
    }
    node *iter=root;
    while(iter->next->data!=x && iter->next!=NULL) iter=iter->next;
    if(iter->next==NULL){
        
    }

}

int main(){
    node *root;
    root=siraliekleme(root, 20);
    root=siraliekleme(root, 10);
    root=siraliekleme(root, 7);
    root=siraliekleme(root, 30);
    listeleme(root);
}