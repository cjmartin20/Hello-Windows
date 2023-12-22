//Below we are linking different C libraries to our code. The function printf comes from stdio.h
#include <stdio.h>
#include <windows.h>
#pragma comment(lib,"user32.lib")
#include "hello.h"

//Everything that follows two forward slashes is a comment and is not any executable code
//Every line in the main function is executed. The main function can call other functions, 
//such as "hello5()"
//"hello5()" will not be called unless explicitly called by the main function

int main() {
	printf("hello world!");
	hello5();
    //status is what we named our variable that is of the data type int (integer)
    
    /*
    int status; //holds return value from commands to check if they were successful
    status = MessageBoxA(
        0,
        "Ohhhhh shit. Oh shit oh shit. What haveeee I done. ",
        "Emergency Message Box",
        0x00000001L); //0x00000041L would be a Combintion of MB_ICONINFORMATION 0x00000040L and MB_OKCANCEL 0x00000001L flags
    if (status == 1) { //IDOK, the OK button was selected
        //You can use the below function to call a program or batch file from the cmd line
        //system(".\\CoolBatchFiles\\super.bat");
        MessageBox(0, "The installation is finished!", "Star Wars Sounds", 0);
    }
    */
    int M = MessageBox(0, "Yo, your system has the virus buffet. Like crazzzyyyy amount of computer STDs. Your S#!t mad infected bruh. I would say run a scanner, but like it's too late. They probaly already know your great grankids social security numbers and shit. Generations of f****d.", "You should get tested...", 0);

    if (M == 2) { //IDCANCEL, the cancel button was selected
        return 0;
    }
	return 0;
}
void hello5() {
	for (int i = 0; i<4; i++) {
		printf("hello world");
	}
}