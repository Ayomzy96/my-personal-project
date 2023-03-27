#include<stdio.h>
/**
 * main - function
 * Return: Always 0
*/
 int main(void){
/* A simple code to print memory address of a variable */
 struct address{ 
int *a;
char *b;
};
struct address y;
int choice;

 printf("input a number or string input 1 for char\n 2 for int\n \n 1.INTEGER\n 2. CHARACTER\n");
scanf("%d",&choice);

 if (choice == 1){
 printf("Enter integer:\n");
 scanf("%d",&y.a);
 printf("the address to this variable is:\n %p\n",y.a);
 }
 else if (choice == 2){
 printf("Enter a character:\n");
 scanf("%s",&y.b);
 printf("The address to this variable is: \n %p\n",y.b);
 }
  return (0);
}
