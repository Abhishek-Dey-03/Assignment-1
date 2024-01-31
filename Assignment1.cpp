/*=====================================================================================================================================
Assignment 1 
Student ID: 10821797
Author: Abhishek Ranjan Dey
Date: 31/01/2024
This program is created to use the simple Bohr formula to model electron transitions.
This program will take user input Atomic Number Z and two principle quantum numbers, to calculate photon energies from a transition.
It will output via user request either Joules or eV.
=====================================================================================================================================*/

#include <iostream>
#include <iomanip>

double energy_calc(int Z, int n_i, int n_f, char energy_choice) 
{
    double reciprocal_initial= 1.0/(n_i*n_i);
    double reciprocal_final= 1.0/(n_f*n_f);
    double E; //energy

    if(energy_choice == 'e') 
    {
         E = 13.6 * Z * Z * (reciprocal_final - reciprocal_initial);
    }
    else 
    {
        E = 13.6 * Z * Z * (reciprocal_final - reciprocal_initial) * 1.60218e-19;
    }
    return E;
}

int main() 
{
    //declare repeat choice 
    char repeat_choice; //should the program repeat
    do 
    {
        int Z; //integer atomic number
        int n_i; //principle quantum number initial
        int n_f; //principle quantum number final
        char energy_choice; //choice of energy
        
    // take in input for atomic number
        std::cout<<"Enter the Atomic Number, initial quantum number, final quantum number and your choice of energy. The energy choice should be e (eV) or J (Joules): ";
        std::cin>>Z>>n_i>>n_f>>energy_choice;

    // catch erroneous input
        while(!isdigit(Z)||!isdigit(n_i)||!isdigit(n_f)) 
        {
            std::cout<<"There is an invalid input. Please try again:\n";
            std::cout<<"Enter the Atomic Number, initial quantum number, final quantum number and your choice of energy. The energy choice should be e (eV) or J (Joules): "; 
            //ignore any non-integer inputs, clear the variable and ignore input.
            std::cin.clear();
            std::cin.ignore();
            std::cin>>Z;
            std::cin>>n_i;
            std::cin>>n_f;
            std::cin>>energy_choice;

        }

        while(n_i<n_f)  
        {
            std::cout<<"Invalid choice. Please ensure the final stage is less than the initial stage:\n ";
            std::cout<<"Enter the Atomic Number, initial quantum number, final quantum number and your choice of energy. The energy choice should be e (eV) or J (Joules): ";
            std::cin.clear();
            std::cin.ignore();
            std::cin>>Z;
            std::cin>>n_i;
            std::cin>>n_f;
            std::cin>>energy_choice;
        }


        while(energy_choice != 'e' && energy_choice != 'J') 
        {
            std::cout<<"Invalid choice. Please enter 'e' for energy in electron volts, or 'J' for energy in joules:\n ";
            std::cout<<"Enter the Atomic Number, initial quantum number, final quantum number and your choice of energy. The energy choice should be e (eV) or J (Joules): ";
            std::cin.clear();
            std::cin.ignore();
            std::cin>>Z;
            std::cin>>n_i;
            std::cin>>n_f;
            std::cin>>energy_choice;
        }

        double energy = energy_calc(Z, n_i, n_f, energy_choice); //assign energy from function output
        if(energy_choice == 'e') 
        {
            std::cout<<"Transition Energy: "<<energy<<"eV."<<std::endl;
        }
        else 
        {
            std::cout<<"Transition Energy: "<<energy<<"J."<<std::endl;
        }

        // Ask user if they want to repeat the process
        std::cout<<"Do you want to calculate another transition energy? (y/n): ";
        std::cin>>repeat_choice;

        while(repeat_choice != 'y' && repeat_choice != 'n') 
        {
            std::cout<<"Invalid choice. Please enter 'y' to repeat or 'n' to exit: ";
            std::cin.clear();
            std::cin.ignore();
            std::cin>>repeat_choice;
        }
    
    } 
    while(repeat_choice == 'y');

    return 0;
}
