#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include "Command.h"
#include <list>

class MacroCommand
{
private:
    std::list<Command*>* commands;
public:
    MacroCommand();
    virtual ~MacroCommand();
    virtual void add(Command* t_command);
    virtual void remove(Command* t_command);
    virtual void execute();

};


void MacroCommand::execute(){
    
};

void MacroCommand::add(Command* t_command){
    
};

void MacroCommand::remove(Command* t_command){
    
};
