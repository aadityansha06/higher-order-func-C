#include <stdio.h>
// defining a function signature 
// act as interface
typedef  int (*operation) (int,int) ;


int add (int a, int b ) {
    return a+b;
}

int mul (int a, int b){
    return a*b;
}
int calc(operation op, int a,int b){//calc is a higher order func or polymorphic

   // op is a callback which hold the address of add,sub
    // based on argument passed in calc (&mul,2,2) or calc (&add,1,2)
    // thus op will call that function which will then return the actual value
    
    return (*op)(a,b);
}

int main (){

int sum=calc(&add,2,2);// calling function add and passing 2 and 3 as argu
int product = calc(&mul,3,3);

printf("\n%d is sum \n",sum);
printf("%d is product\n",product);

    return 0;
}
