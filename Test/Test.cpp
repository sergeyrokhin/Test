#include <iostream>
#include "Test.h"

//��� ���������� ���� ������ ��� ������ �������?
template <class T>
Test<T>::Test(T t)
{
    m_t = t;
    std::cout << "Test.cpp set t = " << t << std::endl;

}
