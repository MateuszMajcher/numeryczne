#include <iostream>
# pragma inline  
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

  char *NAPIS = "\n tekst - test $";  
  
  _asm m{  
       MOV DX, NAPIS  
       MOV AH, 9  
       INT 33 
      }  


	return 0;
}
