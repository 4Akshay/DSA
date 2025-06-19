#include<iostream>
using namespace std;
#include "_vector.h"

template<typename T>
_vector<T>::_vector() :_data(nullptr), _size(0), _capacity(0) {};
template<typename T>
_vector<T>::_vector(T* idata, size_t iSize, size_t iCapacity)
{
    _size = iSize;
    _capacity = iCapacity;
    _data = new T[_capacity];
    for (int i = 0; i < size; i++)
        _data[i] = iData[i];
}
template<typename T>
_vector<T>:: ~_vector() { delete[] _data; }
template<typename T>
_vector<T>::_vector(const _vector& iVec)
{
    if (_size != 0)
    {
        delete[] _data;
        _data = nullptr;
        _size = 0;
        _capacity = 0;
    }
    _capacity = iVec->_capacity + iVec->_capacity;
    _size = iVect->_size;
    _data = new T(_capacity);
    for (int i = 0; i < size; i++)
    {
        _data[i] = iVec->_data[i];
    }
}