#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include "CreateObject.h"

class Factory
{
    public:
    virtual CreateObject* CreateApple() = 0;
    virtual CreateObject* CreateBanana() = 0;
    virtual CreateObject* CreateGrape() = 0;
    private:

};

class FruitFactory : public Factory{
    public:
    CreateObject* CreateApple(){
        return new Apple();
    }
    CreateObject* CreateBanana(){
        return new Banana();
    }
    CreateObject* CreateGrape(){
        return new Grape();
    }
}