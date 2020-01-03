 // исключения нужны для того чтобы позволить программисту создавать и обрабатывать исключения в выполнении программы
// try, catch, throw
#include <iostream>
#include "lib.h"
#include <stdexcept>
using namespace std;


int main() {
    try {
        cout<<(f());
    }
    catch (range_error err){
        cout<< "Range_error:"<< err.what()<<endl;
    }
    catch (runtime_error err){
        cout<< "Runtime_error:"<< err.what()<<endl;
    }
    catch (invalid_argument err){
        cout<< "Invalid_argument:"<< err.what()<<endl;
    }
    return 0;
}