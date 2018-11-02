/*  
Name: Muhammad Ozair
Student Id: 500763463 
COE 428 section: 151
*/

#include <stdio.h>
#include <ctype.h>
/**
 *  The functions in this module implement a Heapdata structure
 *  of integers.
 */

static int top = 0;
int heap[100];

/**
 * heapSize() returns the number of items in the Heap.
 *
 */

int heapSize()
{ return top-1;
  return 0;  //A dummy return statement
}

void heapify(int x)
{
int Variable, L, R, Biggest;
L = (2*x) + 1;
R = (2*x) + 2;
if(L<=heapSize() && heap[x]<heap[L])
{
 Biggest = L;
}
else 
{
 Biggest = x;
}
if(R<=heapSize() && heap[Biggest] < heap[R])
{
 Biggest = R;
}
    if(Biggest != x)
{
  Variable = heap[x];
  heap[x]= heap[Biggest];
  heap[Biggest] = Variable;
  heapify(Biggest);
}
}

/**
 * heapDelete() removes the biggest integer in the heap and returns it.
 *
 */

int heapDelete()
{
    int M;
    M= heap[0];
    heap[0]= heap[heapSize()];
    top--;
    heapify(0);
    return M;
    return 0;  //A dummy return statement
}

/**
 *  addHeap(thing2add) adds the "thing2add" to the Heap.
 *
 */

void addHeap(int thing2add)
{
 int P, x;
    heap[top] = thing2add;
    x = top;
    P = ((x+1)/2) - 1;
while(P >= 0 && heap[P] < thing2add)
{
        heap[x] = heap[P];
        heap [P]= thing2add;
        x = P;
        P = ((x+1)/2) - 1;
}
    top++;
}

void Printing(int Variable2)
{
    int x;
    for(x=0; x<= Variable2; x++)
     fprintf(stderr, "    ");
}

void PrintingHeap(int W, int Variable2)
{
int NextW;

fprintf(stderr, "<node id=\"%d\">\n", heap[W]);

NextW = (2*W) + 1;

if(NextW <= heapSize ())
{
    Printing (Variable2);
    PrintingHeap(NextW, Variable2 + 1);
}

NextW = (2*W) + 2;

if(NextW <= heapSize ())
{
    Printing(Variable2);
    PrintingHeap(NextW, Variable2 + 1);    
}

Printing(Variable2 - 1);
fprintf(stderr, "</node>\n");
}









