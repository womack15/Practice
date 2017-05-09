#include <iostream>
#include <vector>
#include <string>

int adjacentElementsProduct(std::vector<int> inputArray)
{
    int largest = -1001;
    
    std::cout << "Begin: " << *inputArray.begin() << std::endl;
    std::cout << "Back: " << (inputArray.back()) << std::endl;

    for (int i = 0; i < inputArray.size(); i++)
    {
        if (i == inputArray.size() - 1)
            return largest;
        
        int temp = inputArray[i] * inputArray[i+1];

        if ( temp > largest)
            largest = temp;
    }
    
    //for(std::vector<int>::iterator it = inputArray.begin(); it != inputArray.end(); it++)
    //{
        //std::cout << "End: " << *inputArray.end() << std::endl;
        //std::cout << "End: " << inputArray.last() << std::endl;
    //}

    return largest;
}

int main()
{
    int product = 0;
    std::vector<int> inputA = {-23, 4, -3, 8, -12};

    std::cout << "Original: {-23, 4, -3, 8, -12}\n";

    product = adjacentElementsProduct(inputA);

    std::cout << "Largest Adjacent Product: " << product << std::endl;

    return 0;
}
