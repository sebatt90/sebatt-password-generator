/*
*   Author: sebatt90
*   Program: CLI Password Generator
*   Platform: Linux 
*   Date: 10/16/2021
*/
#include <iostream>
#include <ctime>

int main(int argc, char* argv[]){
    srand(time(0));
    std::string password;

    // Password generator
    for(int i = 0; i<atoi(argv[1]); i++){
        int random = rand()%3;
        switch (random)
        {
        case 0:
            password += 'A'+rand()%26;
            break;
        case 1:
            password += 'a'+rand()%26;
            break;
        
        default:
            password += '1'+rand()%9;
            break;
        }
    }

    
    std::cout<<password<<"\n";
    return 1;
}