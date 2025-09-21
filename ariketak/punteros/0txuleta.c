#include <stdio.h>

// Function 1: returns a pointer
int* returnPointer(int *x) {
    // returns the address that points to x
    return x;  
}

// Function 2: returns just the value
int returnValue(int *x) {
    // returns the actual value at that address
    return *x;  
}

//function 3: returns a pointer that points a the 3rd element of an array
int* returnThirdElement(int *arr) {
    // returns the address of the 3rd element in the array
    return arr + 2;  
}

//function 3: returns the value of the 3rd element of an array
int returnThirdValue(int *arr) {
    // returns the value of the 3rd element in the array
    return *(arr + 2);  
}


int main() {
    int number = 5;
    int array[4]  = {2, 11, 34, 32};
    int size = 4;

    // --- Pointer version ---
    //we pass the adress of number
    int *ptr = returnPointer(&number);  
    //returns the address that points to number
    *ptr = 10;  
    printf("Pointer version -> number = %d\n", number); 

    // --- Value version ---
    //pass the adress of number
    int val = returnValue(&number); 
    //returns a copuy of the value at that address
    val = 20; 

    printf("Value version -> number = %d\n", number);    
    printf("Value version -> val = %d\n", val);      

    //----------------------arrays----------------//

    //we pass the array(same as &array[0])
    int *thirdPtr = returnThirdElement(array);
    // we change the value of the original array 3rd element using the pointer
    printf("Pointer version -> array[2] before = %d\n", array[2]);
    *thirdPtr = 50;
    printf("Pointer version -> array[2] = %d\n", array[2]);

    //we pass the array(same as &array[0])
    int valArray = returnThirdValue(array);
    *thirdPtr = 2;
    printf("Value version -> val = %d\n", valArray);
    printf("Value version -> array[2] = %d\n", array[2]);

    return 0;
}