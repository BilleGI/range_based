#pragma once
#include <initializer_list>
#include <QtCore/QCoreApplication>
#include <QtCore>


class Print
{
public:
    Print(std::initializer_list<int>&& list);
    void printArr();
private:
    QVector<int> vec;
};
