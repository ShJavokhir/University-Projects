
#include <iostream>

#include <string>

using namespace std;

class IUT{

       int value;

public:

       IUT(){}
        
       IUT(double value){

             this->value = value;

       }
       bool operator==(IUT b){};


};

 

int main()

{

       IUT i1(10);

       IUT i2 = IUT(14);

       if (i1 == i2){

             cout << "Equal";

       }

       else{

             cout << "Not Equal";

       }

       system("pause");

       return 0;

}