#include <stdio.h>
#include <iostream>
using namespace std;

int function ( int argc , char *argv){
    if ( argc == 2 ){
        goto print;
    }
    goto leave;

    print:
        cout << " We got 2 arguments " << endl ;
    
    leave:
        cout << "leave "<< endl;
}
int main()
{   
    char argument[] = "argument1";
    function(2, argument);

    char x = 134522847566309;
    printf("%d\n" , x );
    
    return 0;
}