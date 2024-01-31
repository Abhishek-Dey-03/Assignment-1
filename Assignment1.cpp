<<<<<<< HEAD
// Assignment 1 - skeleton code

// Program to calculate transition energy using simple Bohr formula

#include<iostream>
#include<iomanip>

int main()
{
    int Z; //integer atomic number
    int n_i; //principle quantum number initial
    int n_j; //principle quantum number final

    // take in input for atomic number
    std::cout<<"Enter the Atomic Number: ";
    std::cin>>Z;
    // catch erroneous input
    while(std::cin.fail())
    {
        std::cout<<"The atomic number must be an integer number without decimal points.\n Please try again:"; 
        //ignore any non-integer inputs, clear the variable and ignore input.
        std::cin.clear();
        std::cin.ignore();
        std::cin>>Z;

    }
    //take in input for initial principle quantum number
    std::cout<<"Enter the Initial Principle Quantum Number: ";
    std::cin>>n_i;
    while(std::cin.fail())
    {
        std::cout<<"The atomic number must be an integer number without decimal points.\n Please try again:"; 
        //ignore any non-integer inputs, clear the variable and ignore input.
        std::cin.clear();
        std::cin.ignore();
        std::cin>>n_i;

    }

    std::cout<<"Enter the Final Principle Quantum Number: ";
    std::cin>>n_j;
    while(std::cin.fail())
    {
        std::cout<<"The atomic number must be an integer number without decimal points.\n Please try again:"; 
        //ignore any non-integer inputs, clear the variable and ignore input.
        std::cin.clear();
        std::cin.ignore();
        std::cin>>n_j;

    }

    double reciprocal_initial= 1.0/n_i;
    double reciprocal_final= 1.0/n_j;
    double E = 13.6 * Z * Z * (reciprocal_final - reciprocal_initial);

    std::cout<<"Transition Energy: "<<E<<"eV."<<std::endl;

  return 0;
}
=======
//Assignment 1 10821797
//This program is created to use the simple Bohr formula to model electron transitions.
//This program will take user input Atomic Numeber Z and 
>>>>>>> e938b1c219066de48c76c02da3757a51ee663945
