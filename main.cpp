#include<iostream>
#include<cstdlib>
#include<string>

void SeriesCombo(std::string componentType)                                                   
{                                                                               
       if (componentType == "r")
		{
			float resistance = 0, totalResistance = 0;                                  
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
		else if (componentType == "c")
		{
			float capacitance = 0, totalCapacitance = 0, equivalentCapacitance = 0;                                  
			size_t numberofCapacitors = 0;

			std::cout << "How many capacitors do you have in series: ";
			std::cin >> numberofCapacitors;
			for (int n = 0; n < numberofCapacitors; n++)
			{
				std::cout << "Enter capacitance of series capacitor in Farads: ";              
				std::cin >> capacitance;                                                 
				totalCapacitance += (1 / capacitance);                                    
			}                                                                                    
			equivalentCapacitance = 1/totalCapacitance;                            
			std::cout << "The equivalent capacitance for the series capacitors is: "<< equivalentCapacitance << " Farads." << std::endl; 

		}	
}                                                                               
                                                                                
void ParallelCombo(std::string componentType)                                                 
    {   
		if (componentType == "r")
		{	
			float resistance = 0, totalResistance = 0, equivalentResistance = 0;        
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
		else if (componentType == "c")
		{
			float capacitance = 0, totalCapacitance = 0;                                  
			size_t numberofCapacitors = 0;

			std::cout << "How many capacitors do you have in parallel: ";
			std::cin >> numberofCapacitors;
			for (int n = 0; n < numberofCapacitors; n++)
			{
				std::cout << "Enter capacitance of parallel capacitor in Farads: ";              
				std::cin >> capacitance;                                                 
				totalCapacitance += capacitance;                                    
			}                                                                                    
			std::cout << "The equivalent capacitance for the parallel capacitors is: " << totalCapacitance << " Farads." << std::endl;
		}	
    }

int main()
{
    std::string resistorOrientation, capacitorOrientation, componentType;
	std::string loopBreaker = "y";
	std::cout << "Welcome to the Equivalent Circuits Calculator" << std::endl;
    while(loopBreaker == "y")
	{	
		std::cout << "Do want to combine resistors or capacitors [r/c]: ";
		std::cin >> componentType;
		if (componentType == "r")
		{	
			std::cout << "\nAre your resistors in series or parallel [s/p]: ";
			std::cin >> resistorOrientation;
			if (resistorOrientation == "s") {SeriesCombo("r");}
			else if (resistorOrientation == "p") {ParallelCombo("r");}
			else {std::cout << "Try again enter only 's' or 'p': " << std::endl;}
			std::cout << "\n";
		}	
		else if (componentType == "c")
		{	
			std::cout << "\nAre your capacitors in series or parallel [s/p]: ";
			std::cin >> capacitorOrientation;
			if (capacitorOrientation == "s") {SeriesCombo("c");}
			else if (capacitorOrientation == "p") {ParallelCombo("c");}
			else {std::cout << "Try again enter only 's' or 'p': " << std::endl;}
			std::cout << "\n";
		}
		std::cout << "Do you wish to continue: ";
		std::cin >> loopBreaker;
		
	}	
	std::cout << "\nThank you please come back again." << std::endl;
    

    return EXIT_SUCCESS;
} 
