/*  
Name: Muhammad Ozair
Student Id: 500763463 
COE 428 section: 151
*/

#include <stdlib.h>
#include <stdio.h>
#include "towers.h"

int main(int argc, char **argv)
{
    int n = 3;
    int from = 1;
    int dest = 2;

    if (argc ==3 || argc>4)
{

    	fprintf(stderr, "%s\n", "Number of entries incorrect");
    	exit(1);
}

    if (argc ==2) 
{

        n = atoi(argv[1]);
}

    else if (argc ==4)
{

    	if(atoi(argv[2])<1 || atoi(argv[2])>3 || atoi(argv[3])<1 || atoi(argv[3])>3)
       {
    		fprintf(stderr, "%s %d %s %d %s\n", "This is invalid, ", atoi(argv[2]), "and", atoi(argv[3]), "are not valid towers");
    		exit(1);
        }
    	else if(atoi(argv[2]) == atoi(argv[3]))
        {
    		fprintf(stderr, "%s\n", "The two towers can't be the same!");
    		exit(1);
        }

    	n = atoi(argv[1]);
    	from = atoi(argv[2]);
    	dest = atoi(argv[3]);
}
    
    	if(n<1)
{
    		fprintf(stderr, "%s\n%", "Not valid disk number");
    		exit(1);
}

    towers(n, from, dest);
    exit(0);
}
