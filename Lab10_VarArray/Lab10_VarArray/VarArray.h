// functions to manipulate variable size array
// Mikhail Nesterenko
// 10/29/2009

#ifndef VARARRAY_H
#define VARARRAY_H

// prints the values in "arrayPtr" of "size" 
void output(int *vArray, int size);

// adds "number" to the array pointed to by "arrayPtr" of "size". 
// if the number is not already there, if "number" is there - no action
// Note, the size of the array is thus increased. 
void addNum(int *& arrayPtr, int number, int &size);

// removes a "number" from the "arrayPtr" of "size".
// if "number" is not there -- no action
// note, "size" changes
void removeNum(int *& arrayPtr, int number, int &size);

#endif // VARARRAY_H