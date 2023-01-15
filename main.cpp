#include <iostream>
using namespace std;

void task(){
    cout << "Just a random output\n ";

    cout << "\npress Enter to continue \n";
    cin.ignore();
    cin.ignore();
    system ("CLS");
    return;
}

int main(){

    char selection;
    bool running = true;
    while(running){
        cout << "Choose Task: \n";
        cout << "1 - Perform task 1 \n";
        cout << "2 - Perform task 2 \n";
        cout << "3 - Perform task 3 \n";
        cout << "0 - exit program \n";
        cout << endl;
        cout << "Option: ";

        cin >> selection;

        system("CLS");
        
		switch (selection) {			
			case '1': task(); break;
			case '2': task(); break;
			case '3': task(); break;
			case '0': cout << "Thank You. See you again. Bye!"; running = false; break;
			default : cout << "Your selection is invalid selection\n";
		}
    }

    cout << "\n\npress Enter to exit ...";
    cin.ignore(); cin.ignore();
    return 0;
}