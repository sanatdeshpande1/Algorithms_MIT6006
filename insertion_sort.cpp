// This is a C++ implementation of insertion sort and is a part of MIT6006 Algorithms class
// Author: Sanat Deshpande


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int numOfElements; cin>>numOfElements;
    int elementsList[numOfElements];
    for(int i=0;i<numOfElements;i++) {
        cin>>elementsList[i];
    }
    for(int i=1;i<numOfElements;i++) {
        for(int j=i-1;j>=0;j--) {
            if(elementsList[i] < elementsList[j]) {
                int temp = elementsList[j];
                elementsList[j] = elementsList[i];
                elementsList[i] = temp;
                i = j;
            }
        }
    }
    for(int i=0;i<numOfElements;i++) {
        cout<<elementsList[i]<<" ";
    }
    return 0;
}