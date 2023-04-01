#include<stdio.h>
#include<stdlib.h>

struct details{
    char name;
    int age;
    struct details *nxt;
  };

int main(void){

  /*DECLARE NODES and HEAD variable*/
  struct details *nodeA, *nodeB,*head,*nodeC,*temp;

  /*ALLOCATE MEMORY TO EACH NODE*/
  nodeA=(struct details *) malloc(sizeof(struct details));
  nodeB=(struct details *) malloc(sizeof(struct details));
  nodeC=(struct details *) malloc(sizeof(struct details));

/*ASSIGN POINTER TO THE NEXT NODE WHILE LAST NODE POINTS TO NULL*/
nodeA->nxt=nodeB;
nodeB->nxt=nodeC;
nodeC->nxt=NULL;

/*ASSIGN VALUES TO THE VARIABLES*/
nodeA->age=13;
nodeB->age=12;
nodeC->age=11;

/*Create a head*/
head=nodeA;
/*create a temp vaiable for moving around the node*/
temp=head;

/*create a conditional statement to print node.age value in each node*/
while(temp->nxt != NULL){ 
  printf("%d",temp->age);
  temp=temp->nxt;
}
printf("%d",temp->age);

}
