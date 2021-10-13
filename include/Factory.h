#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include "CreateObject.h"


class Factory
{
    public:
    virtual CreateObject *CreateBuild() = 0;
    private:

};

class BrickFactory : public Factory{
    public:
    CreateObject* CreateBuild(){
        return new Brick();
    }
};

class StoneFactory : public Factory{
    public:
    CreateObject* CreateBuild(){
        return new Stone();
    }
};
class ConcreteFactory : public Factory{
    public:
    CreateObject* CreateBuild(){
        return new Concrete();
    }
};
class WoodFactory : public Factory{
    public:
    CreateObject* CreateBuild(){
        return new Wood();
    }
};