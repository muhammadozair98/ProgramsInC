/*  
Name: Muhammad Ozair
Student Id: 500763463 
COE 428 section: 151
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

extern char *  pop();
extern void push(char *);
extern int isEmpty();
extern void start();
extern void add(char *, int );
extern void PrintTheTable();

int main(int argc, char * argv[])
{
int ch;
char char1[1000], char2[1000];
fprintf(stderr, "Enter only single-character XML tags or of arbitrary length\n");
fprintf(stderr, "OR you can use the file named 'codingtesttwo' to implement this program by doing:\n");
fprintf(stderr, "countXML<codingtesttwo\n");
fprintf(stderr, "MAKE SURE TO PRESS Ctrl+D at the end of inputting XML tags!\n");
start();

while ((ch = getchar()) != EOF)
{
if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/'))
	    continue;
	
else if(ch == '<')
{
ch=getchar();
	if((isalpha(ch)))
	{	
	 char *string;
	 int x=0;
	 while(ch!='>')
	{
	  char1[x] = ch;
	   x++;
          ch = getchar();
	}
	 char1[x]='\0';
	  string =(char *) malloc(x);
		strcpy(string, char1);
		push(string);
		add(string, x);		
}

else if(ch == '/')
{
int x= 0;
ch  = getchar();
	while(ch!='>')
	{
	 char1[x]=ch;
	 ch=getchar();
	 x++;
	}
	char1[x]= '\0';
	if(isEmpty() != 0)
		{
		    strcpy (char2, pop());
		    if(strcmp(char1, char2) != 0)
		    {
			fprintf(stderr, "NOT Valid\n");
			exit(1);
		    }
		}
		else
		{
		    fprintf(stderr, "NOT Valid\n");
		    exit(1);
		}
}
}
}

if(isEmpty()==0)
{
	    fprintf(stderr, "Valid\n");
	    PrintTheTable();
	    exit(0);
}
    fprintf(stderr, "NOT Valid!\n");
    exit(1);
}

