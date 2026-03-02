// COMSC-210 | lab 14 | Alexander Sierra
#include <iostream>
#include <iomanip>
using namespace std;

const int W10 = 10; //for formatting

class Color {
private:
    int red;
    int green;
    int blue;
public:
//getters and setters
    int getRed() {return red;}
    void setRed(int r) {red = r;}
    int getGreen() {return green;}
    void setGreen(int g) {green = g;}
    int getBlue() {return blue;}
    void setBlue(int b) {blue = b;}
//member print method
    void print() {
        cout << setw(W10) << "Red Value: " << red << endl;
        cout << setw(W10) << "Green value: " << green << endl;
        cout << setw(W10) << "Blue value: " << blue << endl;
    }
};

int main() {
    //color 1
    
    return 0;
}