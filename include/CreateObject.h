#pragma once
#include <iostream>
#include <stdio.h>
#include <string>


class CreateObject
{
    public:
    ~CreateObject();
    virtual void draw() = 0;
    void Print() {std::cout << "Printing Brick" << std::endl;}

};

class Brick : public CreateObject
{
    public:
    void draw(){std::cout << "Brick drawn\n";}
};

class Stone : public CreateObject
{
    public:
    void draw(){std::cout << "Stone drawn\n";}
};

class Concrete : public CreateObject
{
    public:
    void draw(){std::cout << "Concrete drawn\n";}
};

class Wood : public CreateObject
{
    public:
    void draw(){std::cout << "Wood drawn\n";}
};