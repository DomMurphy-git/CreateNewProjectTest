//include headers and libraries
#include "Library.h"
#include <string>
#include <iostream>

int main(){
    Library library;
    
    //ask for commands and execute
    char casevar;

    while(casevar != 'q'){
        cout << "Enter command: ";
        cin >> casevar;
        if(casevar == 'a'){
            string bookName;
            cin >> bookName;
            if(library.addBook(bookName)){
            }
            else{
                cout << "Cannot add the book." << endl;
            }
        }
        else if(casevar == 'r'){
            string bookName;
            cin >> bookName;
            if(library.removeBook(bookName)){
            }
            else{
                cout << "Cannot remove the book." << endl;
            }
        }
        else if(casevar == 'p'){
            library.print();
        }
        else if(casevar == 'q'){
        }
        else{
            cout << "Invalid command" << endl;
        }
    }

}
