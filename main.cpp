#include<iostream>
#include<cstdlib>
#include<string>

void SeriesCombo()                                                   
     {                                                                               
       float resistance = 0, totalResistance = 0;                                  
       std::string loopBreaker = "y";                                                     
       size_t numberofResistors = 0;

       std::cout << "How many resistors do you have in series: ";
       std::cin >> numberofResistors;

       for (int n = 0; n < numberofResistors; n++)
       {
            std::cout << "Enter resistance of series resistor in ohms: ";                
            std::cin >> resistance;                                                 
            totalResistance += resistance;                                          
       }                                                                                    
       std::cout << "The equivalent resistance for the resistors in series is " << totalResistance << " ohms." << std::endl;
    }                                                                               
                                                                                
void ParallelCombo()                                                 
    {                                                                               
        float resistance = 0, totalResistance = 0, equivalentResistance = 0;        
        std::string loopBreaker = "y";                                                     
       size_t numberofResistors = 0;

       std::cout << "How many resistors do you have in parallel: ";
       std::cin >> numberofResistors;
               
        for (int n = 0; n < numberofResistors; n++)
        {
            std::cout << "Enter resistance of parallel resistor in ohms: ";              
            std::cin >> resistance;                                                 
            totalResistance += (1 / resistance);                                    
        }                                                                                    
        equivalentResistance = 1/totalResistance;                            
        std::cout << "The equivalent resistance for the parallel resistors is: "<< equivalentResistance << " ohms." << std::endl; 
        
    }

int main()
{
    std::string resistorOrientation;
    std::cout << "Welcome to the Resistor Calculator" << std::endl;
    std::cout << "\nAre you're resistors in series or parallel [s/p]: ";
    std::cin >> resistorOrientation;
    if (resistorOrientation == "s") {SeriesCombo();}
    else if (resistorOrientation == "p") {ParallelCombo();}
    else {std::cout << "Try again enter only 's' or 'p': " << std::endl;}
    std::cout << "\n";
    
    return EXIT_SUCCESS;
} 
