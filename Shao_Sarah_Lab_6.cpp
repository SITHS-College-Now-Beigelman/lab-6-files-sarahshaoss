//Sarah Shao
//10/15/2024
//Lab 6

#include <iostream> //includes libraries
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;
//shortcut

int main()
{
    double int1, int2;
    //creates a variable to store the 2 integers
    char character;
    //creates a variable to store a character
    string sentence;
    //creates a variable to store a sentence or string
    char asciivalue;
    //creates a variable to change ascii number into a character


    ifstream inFile; 
    // Step 2: Declare an ifstream variable
    ofstream outFile; 
    // Step 2: Declare an ofstream variable

    inFile.open("inData.txt");
    outFile.open("outData.txt");
    // Step 3: Open the files

    inFile >> int1 >>int2;
    //reads the 2 integers
    outFile << "Sum of both integers: " << int1 + int2 << endl;
    //outputs the sum of the integers

    inFile >> character;
    //reads the character
    asciivalue = character + 1;
    //finds the next character
    outFile << "Character after this character: " << asciivalue << endl;
    // outputs the character after the character

    inFile >> sentence;
    //reads the string or sentence
    outFile << "The sentence: " << sentence << endl;
    //outpurs the string into the out file

    inFile.close();
    //closes file
    outFile.close();
    //closes file

    return 0;
    //ends program

}