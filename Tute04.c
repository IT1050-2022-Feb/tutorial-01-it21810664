/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/


#include <stdio.h>
int minimum( int num1, int num2 );
int maximum( int num1, int num2 );
int multiply( int num1, int num2 );

int main( void )
{
    int no1, no2;
    
    printf( "Enter number 1 : " );
    scanf( "%d", &no1 );
    
    printf( "Enter number 2 : " );
    scanf( "%d", &no2 );
    
    printf( "\n" );
    
    printf( "Minimum number : %d\n", minimum ( no1, no2 ) );
    printf( "Maximum number : %d\n", maximum( no1, no2 ) );
    printf( "Product of two numbers : %d\n", multiply( no1, no2 ) );
    
    return 0;
}

int minimum( int num1, int num2 )
{
    if( num1 < num2 )
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
int maximum( int num1, int num2 )
{
    if( num1 > num2 )
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
int multiply( int num1, int num2 )
{
    return num1 * num2;
}
