 #include "Person.h"
 #include <iostream>
Person* createPersonArray(int n) {
    Person* array = new Person[n];
    int arr(n);
    for (int i = 0; i < n; ++i){
        array[i].name= "Anh";
        array[i].age = 0;
    }
    return array;
 }