#include "Person.h"
#include <iostream>
using namespace std;
extern Person* createPersonArray(int n); 
int main(){
    Person* array = createPersonArray(5);
    for (int i = 0; i < 5; i++) {
        cout << i << " " << array[i].name <<" "<< array[i].age; 
    }
}