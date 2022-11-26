#include <iostream>
#include <string.h>
using namespace std;

//Recursion in function
//recursion is the technique of making a function call itself. This technique provides a way 
//to break complicated problems down into simple problems which are easier to solve
//the following example recursion is used to add a range of numbers together by breaking it down into the simple task of adding two numbers

int factoriaFinder (int x){
if (x==1){
    return 1;
}else{
    return x*factoriaFinder (x-1);
}

}

int main ()
{

    cout <<factoriaFinder(5)<<endl;
}




















