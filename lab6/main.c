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
extern void addHeap(int);
extern void PrintingHeap(int, int);
extern int heapDelete();
extern int heapSize();

int main(int argc, char * argv[])
{
int value,s,ValuePushed,ArbVar;

fprintf(stderr, "Enter integers. Once done, press Ctrl+D twice for the output\n");
fprintf(stderr, "OR you can test out this program with a file named 'codingtest' with 'heap<codingtest'\n");

  while (scanf("%d\n", &value) != EOF) 
 {
    fprintf(stderr, "READING INPUT: %d\n", value);
    //
    addHeap(value);  
 }
fprintf(stderr, "\n");
PrintingHeap(0,0);
fprintf(stderr, "\n");   
s= heapSize();
    for(ArbVar=0;ArbVar<=s;ArbVar++)
   {
        ValuePushed= heapDelete();
        printf("%d\n", ValuePushed);
        push(ValuePushed);
   }

fprintf(stderr, "\n");
    for(ArbVar=0;ArbVar<=s;ArbVar++)
   {
        fprintf(stderr, "%d\n", pop());
   }
   fprintf(stderr, "\n");
exit(0);
}
