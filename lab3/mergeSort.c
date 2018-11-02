/*  
Name: Muhammad Ozair
Student Id: 500763463 
COE 428 section: 151
*/

#include "mySort.h"
#include <stdio.h>
#include <stdlib.h>

void Merge(int array[], int first, int Middle, int last);
void mySort(int array[], unsigned int first, unsigned int last)
{

int Middle;

if (myCompare(first,last)<0)
  {
	Middle = ((first+last)/2); 
	mySort(array,first,Middle);
	mySort(array,(Middle+1),last);
	Merge(array,first,Middle,last);
  }
}

void Merge(int array[], int first, int Middle, int last)
{

int n = (Middle-first)+1;
int o = (last-Middle);
int t,y,u;
int l[MAX_SIZE_N_TO_SORT];
int r[MAX_SIZE_N_TO_SORT];

for(t=0;t<n;t++)
	{
	myCopy(&array[first+t],&l[t]);
	}
for(y=0;y<o;y++)
	{
	myCopy(&array[Middle+y+1],&r[y]);
	}
l[n] = MAX_SIZE_N_TO_SORT;
r[n] = MAX_SIZE_N_TO_SORT;
t = 0;
y=0;

for(u=first;u<=last;u++)
  {

if(myCompare(l[t],r[y]) < 0)
	{
myCopy(&l[t], &array[u]);
t++;
	}
else
	{
myCopy(&r[y], &array[u]);
y++;
	}
  }

}


