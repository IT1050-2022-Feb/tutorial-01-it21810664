/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>
int main( void )  // Function main begins program execution
{
    int distance;
    float total = 0;  // variable declaration and initialization
    
    printf( "Enter the distance : " );  // prompt to print
    scanf( "%d", &distance );  // read an intger
    
    if( distance <= 30 )  // use selection control
    {
        total = distance * 50;
    }
    if( distance > 30 )
    {
        total = ( 30 * 50 ) + ( ( distance - 30 ) * 40 );
    }
    
    printf( "The total : %.2f\n", total );  // display total fair
    
    return 0;
}  // end of function main