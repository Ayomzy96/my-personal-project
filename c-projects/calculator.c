#include<stdio.h>

int main()
{
    float f,s;
    int a,b,choice;
     int div(), mul(), add(),sub(), mean();
     int (*ptrf[])(int,int)={add,sub,div,mul,mean};

        printf("SELECT THE FOLLOWING OPERATION YOU NEED 0.ADDITION\n 1.SUBTRACTION \n 2. DIVISION\n 3. MULTIPLICATION\n 4.MEAN \n");
        scanf("%d",&choice);
        printf("input first number\n");
        scanf("%d",&a);
        printf("input second number\n");
        scanf("%d",&b);
        int result=ptrf[choice](a,b);

        printf("RESULT:\n %d",result);

}
 #include<stdio.h>
 
 int div( int a, int b)
{
    int r = a/b; 
return (r);
}
int mul(int a, int b)
{
  int m = a * b;
  return (m);
}
int add(int a, int b)
{
  int m = a + b;
  return (m);
}
int mean(int a, int b)
{
    int m= (a+b)/2;
    return(m);
}
int sub(int a,int b)
{
    return(a-b);
}
