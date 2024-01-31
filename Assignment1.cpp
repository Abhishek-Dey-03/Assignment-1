//Assignment 1 10821797
//This program is created to use the simple Bohr formula to model electron transitions.
//This program will take user input Atomic Number Z and two principle quantum numbers, to calculate photon energies from a transition.
//It will output via user request either Joules or eV.

#include<iostream>
#include<iomanip>

int main(){
    //declare repeat choice 
    char repeat_choice; //should the program repeat
    do{
        int Z; //integer atomic number
        int n_i; //principle quantum number initial
        int n_j; //principle quantum number final
        char energy_choice; //choice of energy
        

    // take in input for atomic number
        std::cout<<"Enter the Atomic Number, intial quantum number, final quantum number and your choice of energy.\n The energy choice should be e (eV) or J (Joules): ";
        std::cin>>Z;
        std::cin>>n_i;
        std::cin>>n_j;
        std::cin>>energy_choice;



    // catch erroneous input
        while(std::cin.fail())
        {
            std::cout<<"The atomic number must be an integer number without decimal points.\n Please try again:"; 
            //ignore any non-integer inputs, clear the variable and ignore input.
            std::cin.clear();
            std::cin.ignore();
            std::cin>>Z;

        }
   
   
        while(std::cin.fail())
        {
            std::cout<<"The principle number must be an integer number without decimal points.\n Please try again:"; 
        //ignore any non-integer inputs, clear the variable and ignore input.
            std::cin.clear();
            std::cin.ignore();
            std::cin>>n_i;

        }

    
        while(std::cin.fail())
        {
            std::cout<<"The principle number must be an integer number without decimal points.\n Please try again:"; 
            //ignore any non-integer inputs, clear the variable and ignore input.
            std::cin.clear();
            std::cin.ignore();
            std::cin>>n_j;

        }
        
        //input for energy type


        while(std::cin.fail())
        {
            std::cout<<"The choice must be a single letter e or J.\n Please try again:"; 
            //ignore any non-char inputs, clear the variable and ignore input.
            std::cin.clear();
            std::cin.ignore();
            std::cin>>n_i;
        }

        while (energy_choice != 'e' && energy_choice != 'J') {
            std::cout << "Invalid choice. Please enter 'e' for energy in electron volts, or 'J' for energy in joules: ";
            std::cin >> energy_choice;
        }

        double reciprocal_initial= 1.0/n_i;
        double reciprocal_final= 1.0/n_j;
        if (energy_choice == 'e'){
            double E_eV = 13.6 * Z * Z * (reciprocal_final - reciprocal_initial);
            std::cout<<"Transition Energy: "<<E_eV<<"eV."<<std::endl;
        }
        else {
            double E_joules = 13.6 * Z * Z * (reciprocal_final - reciprocal_initial) * 1.60218e-19;
            std::cout<<"Transition Energy: "<<E_joules<<"J."<<std::endl;
        }

        // Ask user if they want to repeat the process
        std::cout << "Do you want to calculate another transition energy? (y/n): ";
        std::cin >> repeat_choice;

        while (repeat_choice != 'y' && repeat_choice != 'n') {
            std::cout << "Invalid choice. Please enter 'y' to repeat or 'n' to exit: ";
            std::cin >> repeat_choice;

    }
    
    }while (repeat_choice == 'y');
  return 0;
}

    






