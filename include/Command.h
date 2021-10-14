#pragma once
#include <iostream>
#include <stdio.h>
#include <string>

class Command
{
private:

public:
    virtual ~Command();
    virtual void execute() = 0;
    virtual void undo() = 0;

protected:
    Command(){};    
};

class CreateBrickCommand : public Command
{
    private:
    int m_brickCounter{};
    public:
    virtual void execute(){m_brickCounter++; std::cout << "Bricks: " + m_brickCounter << std::endl;}
    virtual void undo(){ m_brickCounter--; std::cout << "Brick Removed: " + m_brickCounter << std::endl;};
};

class CreateStoneCommand : public Command
{
    private:
    int m_stoneCounter{};
    public:
    virtual void execute(){m_stoneCounter++; std::cout << "Stone: " + m_stoneCounter << std::endl;}
    virtual void undo(){ m_stoneCounter--; std::cout << "Stone Removed: " + m_stoneCounter << std::endl;};
};

class CreateConcreteCommand : public Command
{
    private:
    int m_concreteCounter{};
    public:
    virtual void execute(){m_concreteCounter++; std::cout << "Concrete: " + m_concreteCounter << std::endl;}
    virtual void undo(){ m_concreteCounter--; std::cout << "Concrete Removed: " + m_concreteCounter << std::endl;};
};

class CreateWoodCommand : public Command
{
    private:
    int m_woodCounter{};
    public:
    virtual void execute(){m_woodCounter++; std::cout << "Wood: " + m_woodCounter << std::endl;}
    virtual void undo(){ m_woodCounter--; std::cout << "Woods Removed: " + m_woodCounter << std::endl;};
};
