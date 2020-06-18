//A small example on using Lambdas in cpp

#include <iostream>
#include <vector>
#include <algorithm>

void ForEach(const std::vector<int> & values, void(*func)(int))
{

    for(int value : values)
      func(value);

}

int main()
{

    std::vector<int> values = {1, 5 ,4, 2, 3};
    auto lambda = [](int value){std::cout << "Value : " << value << std::endl; }
    ForEach(values, lambda);
    return 0;
    
    //Another example
    // auto it = std::find_if(values.begin(), values.end(), [](int value){return value >3}); 
    //std::Cout<< *it << std::endl //ANother use of lambdas
    
}
