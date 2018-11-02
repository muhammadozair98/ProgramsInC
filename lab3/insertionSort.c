/*  
Name: Muhammad Ozair
Student Id: 500763463 
COE 428 section: 151
*/

#include "mySort.h"

void mySort(int array[], unsigned int first, unsigned int last)
{

int i;
int j;
int tmp;
   for(i=(first+1);i<=(last);i++) 
{
       myCopy(&array[i], &tmp);
j=(i-1);
 
       while (j>=0 && myCompare(array[j], tmp)>0)
       {
           myCopy(&array[j], &array[j+1]);
           j=(j-1);
       }
      myCopy(&tmp, &array[j+1]);
   }

}





