#include<stdio.h>

int bit_swaps_required( int a, int b ) { 
    unsigned int count = 0;
    for( int c = a ^ b; c != 0; c = c >> 1 ) {
        count += c & 1;
    }
    return count;
}
