#include<stdio.h>
#include<string.h>

struct info
{
    char *appname;
    char *email;
    char *password;
};

int main(void)
{
    
    struct info h;                                  /*declaring a structure where data type is the STRUCT INFO*/
    struct info *ptr = &h;                               /* A pointer to h*/
    (*ptr).appname="FACEBOOK"; 
    ptr->email="abraay117@mail.com";
    ptr->password="****";

char name[10];
    printf("enter your username:\n");
    scanf("%s",&name);

if(strcmp(name,"Ayomzy")==0)                        /*STRCMP is used for comparing strings for comparing strings */

printf("YOUR APPNAME IS %s \n", ptr->appname);
printf("YOUR E-MAIL IS %s \n", ptr->email);
printf("YOUR PASSWORD IS %s \n", h.password);

return (0);
}
