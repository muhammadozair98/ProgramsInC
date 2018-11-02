/*  
Name: Muhammad Ozair
Student Id: 500763463 
COE 428 section: 151
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<limits.h>
#include<string.h>
#define HASH_TABLE_SIZE 1057

typedef struct Enter Enter, *EnterPtr;
struct Enter
{
  char * string;
  int count;
};
Enter hashtable[HASH_TABLE_SIZE];
void start()
{
int a;
for(a=0;a<HASH_TABLE_SIZE;a++)
 {
    hashtable[a].count=0;
 }
}



void add(char * tag, int def)
{
int b=0;
int c;
 for(c=0;c<def;c++)
{
    b += tag[c];
}

int entry =(b % HASH_TABLE_SIZE);

if(hashtable[entry].string != NULL)
{
	if(strcmp(hashtable[entry].string, tag) == 0)
	{
	  hashtable[entry].count++;
	}
	else 
	{
		while(hashtable[entry].string != NULL)
		{
			entry++;
			if(hashtable[entry].string != NULL)
			{
			if(strcmp(hashtable[entry].string, tag) == 0)
			{
			 hashtable[entry].count++;
			break;
			}
		        }
	        }
         }
}
if(hashtable[entry].string == NULL)
{
   hashtable[entry].count++;
   hashtable[entry].string = tag;
}
}

void PrintTheTable()
{
int d;
for(d=0;d<HASH_TABLE_SIZE;d++)
{
  if(hashtable[d].count!=0)
  {
    fprintf(stderr, "%s: %d\n", hashtable[d].string, hashtable[d].count);
  }
}
}









