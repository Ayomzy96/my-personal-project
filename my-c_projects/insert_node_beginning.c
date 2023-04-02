#include<stdio.h>
#include<stdlib.h>

int main(void){

  struct node{
    int n;
    struct node *nxt;
  };

  /*DECLARE NODE HEAD AND TEMP FOR TRAVERSING*/
  struct node *head,*tmp,*node1,*node2,*node3,*newnode;

  /*allocate memory for each node*/
  newnode=(struct node *) malloc(sizeof(struct node));
  node1=(struct node *) malloc(sizeof(struct node));
  node2=(struct node *) malloc(sizeof(struct node));
  node3=(struct node *) malloc(sizeof(struct node));
  
  /*create nodes*/
  node1->nxt=node2;
  node2->nxt=node3;
  node3->nxt=NULL;

  /*link the head*/
  head=node1;

  /*Assign values to elements n in each node*/
  newnode->n=1;
  node1->n=2;
  node2->n=3;
  node3->n=4;

  /*link tmp for traversing to head*/
  tmp=head;

  /*how to insert newnode at the beginning*/
  newnode->nxt=head;
  head=newnode;

  /*link tmp for traversing to head*/
  tmp=head;
  
/*create conditional statement to print each node*/
  int count;
  for(count=1; count <5; count++){
  printf("EACH NODE VALUE IS NOW %d\n",tmp->n);
  tmp=tmp->nxt;
}
}
