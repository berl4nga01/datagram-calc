#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#define hSize 20 // header size for ipv4

int main(int argc, char *argv[])
{
    printf("\e[1;1H\e[2J"); // clear prompt

    printf("\tIPV4 FRAGMENTATION CALC:\n*-----------------------------------------*\n");
    //define usable vars of calcs
    int data = atoi(argv[1]);
    int total = data; // for another use of the same data
    int mtu = atoi(argv[2]);
    mtu = mtu - hSize; //remove header size (IPV4)
    float tf = 0; // total of fragments

    //execution of fragment calc: Data/MTU = Total of fragments
    tf = data/mtu;

    //round the number
    tf = round(tf);

    //convert to integer
    int counter = (int)tf;
    printf("Total of fragments: %i\n", counter);

    int poffset, i = 0; // previous offset
    for(i; i < counter; i++)
    {
             if(data >= mtu){
               printf("Size data of fragment %i: %i bytes\n", i, mtu);
               data = data - mtu;
             }
    }
    if(data > 0)
        printf("Size data of fragment %i: %i bytes\n", i++, data);

    //calc offsets
    printf("\nOffsets: \n\n[Offset 1] = 0\n");


    for(int i = 2; i < tf; i++)
    {
        int offset = mtu / 8;
        printf("[Offset %i] = %i\n", i++, offset);
    }

    //exit
    printf("*-----------------------------------------*");
    return 0;
}
