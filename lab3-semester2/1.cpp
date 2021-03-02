#include<bits/stdc++.h>
using namespace std;

class Box{
    private:
        double width;
    public:
        void setWidth(double newWidth){
            this->width = newWidth;
        }
        friend void printWidth(Box box);
};

void printWidth(Box box){
    cout<<"Width of box is: "<<box.width<<endl;
}

int main(){
    Box myBox;
    myBox.setWidth(7.77);
    printWidth(myBox);
}
