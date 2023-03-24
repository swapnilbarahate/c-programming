#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int genrateRandomNumber(int n)
{
    srand(time(NULL));//srand tack seed as an input is defined inside stdlib.h
    return rand() %n;
}
int main()
{
    printf("The random number between 0 to 5 is: %d\n",genrateRandomNumber(5));
    return 0;

}