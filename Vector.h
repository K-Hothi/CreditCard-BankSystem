#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <stdexcept>

using namespace std;

template <typename T>
class Vector {
private:
    T* arr;
    int length;
    int capacity;

    void resize(int newCapacity) {
        T* newArr = new T[newCapacity];
        for (int i = 0; i < length; ++i) {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
        capacity = newCapacity;
    }

public:
    Vector() : arr(nullptr), length(0), capacity(0) {
        resize(1);
    }

    ~Vector() {
        delete[] arr;
    }

    bool search(T data){
        for(int i = 0; i < length; i++){
            if(arr[i] = data){
                return true;
            }
        }
        return false;
    }

    void insert(T data) {
        if (length == capacity) {
            resize(2 * capacity);
        }
        arr[length++] = data;
    }

    bool remove(T data) {
        for (int i = 0; i < length; ++i) {
            if (arr[i] == data) {
                for (int j = i; j < length - 1; ++j) {
                    arr[j] = arr[j + 1];
                }
                --length;
                if (length > 0 && length == capacity / 4) {
                    resize(capacity / 2);
                }
                return true;
            }
        }
        return false;
    }

    int size() const {
        return length;
    }

    bool isEmpty() const {
        return length == 0;
    }

    T& operator[](int index) {
        if (index < 0 || index >= length) {
            throw out_of_range("Index out of range");
        }
        return arr[index];
    }
};

#endif
