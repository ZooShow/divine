#include <fstream>
#include <iostream>
using namespace std;

double* readFile (int n){
    ifstream in;
    double* mas=new double[2];
    if (n == 1){
        in.open("../input.txt");
    } else if (n == 2){
        in.open ("input.txt");
    }else if (n == 3){
        in.open ("../input_invalid.txt");
    }
    if (in.is_open()){
        int numLine = 0;
        while (!in.eof()){
            in>>mas[numLine];
            ++numLine;
        }
        cout<<mas[0]<<endl;
        cout<<mas[1]<<endl;
        if (numLine == 2) {
            return mas;
        } else {
            throw range_error("Invalid number of arguments");
        }
    } else{
        throw invalid_argument("Can't read file");
    }
}

double divine (double* mas){
    if (mas[1]==0){
        throw runtime_error("Division by zero!");
    }else{
        return (mas[0] / mas[1]);
    }
}

double f(){
    double *mas = readFile(1);
    return (divine(mas));
}