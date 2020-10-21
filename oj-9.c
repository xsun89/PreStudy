//
// Created by Xin Sun on 2020-10-20.
//
#include <stdio.h>
#include <math.h>
int factorial(int x)
{
    if(x == 1){
        return 1;
    }
    return x*factorial(x-1);
}
int main()
{

}
