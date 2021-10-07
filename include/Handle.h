#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include "CreateObject.h"



class HandleToCreateObject {
    public:
        HandleToCreateObject() : createObject(new CreateObject){}

    private:
        CreateObject* createObject;
};