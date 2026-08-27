#include <iostream>
#include <stdexcept>

void divide (int a, int b ) {
    if (b==0) {
        throw std::invalid_argument ("Division by zero is invalid");
    }
    std::cout << "Results: " << a/b << std::endl;
}

int main (){
   try
   {
    /* code */
     divide (10,0);
   }catch(const std::invalid_argument& e)
    std::cerr << "Caught :"() << std::endl;
   }
   return 0;
}