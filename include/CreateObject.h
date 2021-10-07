#pragma once
#include <iostream>
#include <stdio.h>
#include <string>


class CreateObject
{
    public:
    CreateObject();
    virtual ~CreateObject();
    virtual void draw() = 0;
    void Print() {std::cout << "Printing Apple" << std::endl;}

    private:
    // add something??
};

class Apple : public CreateObject
{
    public:
    void draw(){std::cout << "Apple drawn";}
};

class Banana : public CreateObject
{
    public:
    void draw(){std::cout << "Banana drawn";}
};

class Grape : public CreateObject
{
    public:
    void draw(){std::cout << "Grape drawn";}
};

