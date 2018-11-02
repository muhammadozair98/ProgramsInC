/*  
Name: Muhammad Ozair
Student Id: 500763463 
COE 428 section: 151
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

extern int pop();
extern void push(int);
extern int StackValue();
extern int TopValue();
extern int isEmpty();

int main(int argc, char * argv[])
{

    int ch;
    int count=0;
    int str1[100];
    int str2[100],str3[100];
    int a,b,c=0,d;

fprintf(stderr, "Enter only single-character XML tags\n");
fprintf(stderr, "OR you can use the file named 'codingtestone' to implement this program by doing:\n");
fprintf(stderr, "countXMLsimpleTags<codingtestone\n");

ch=getchar();

for(d=0;d<100;d++)
str3[d]=0;

while ((ch) != EOF) {

if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/'))
  break;
  
if(ch=='/')
{

	if((ch=getchar())==StackValue())
	{
	pop();
	}
	else
	{
	fprintf(stderr, "NOT Valid\n"); 	
	exit(0);
	}
}

	else if(ch=='<')
	{
	ch=getchar();
	
	if(!(isalpha(ch)))
	continue;

	str1[count]=ch;
	count++;
	push(ch);
	}

	else
	ch=getchar();

}
  if(TopValue()==0)
{
fprintf(stderr, "Valid\n"); 
str2[0]=str1[0];
str3[0]=0;
c=0;
for(a=0;a<count;a++)
  {
	for(b=0;b<count;b++)
	{
		if(str2[c]==str1[b] )
		{
			str3[c]++;
			str1[b]=0;
		}

	}
      if(str1[a]==0)
	{
		c++;
		str2[c]=str1[a+1];

	}



  }
}
else
{
fprintf(stderr, "NOT Valid\n"); 
exit(0);       
}

for(d=0;d<c;d++)
 {
  if(str2[d])
  fprintf(stderr, "%c %d\n",str2[d],str3[d]);
 }
}

