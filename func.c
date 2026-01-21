#include <stdio.h>

int add (int a, int b ) {
    return a+b;
}

int main (){
  // return type (*func_ptr) (int,int) argument type 
    int (*func_ptr) (int,int); // int is return type , (func_ptr) is pointer_name
    // (int,int) is parameter type
    func_ptr = &add; // func_ptr holds the addr of add 

    int result = (*func_ptr)(2,3); // calling func_ptr
    // would call add and passing 2 and 3 as argument 
 printf("\n%d is sum ",result);
}
