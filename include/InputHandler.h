#pragma once
#include <SDL.h>
#include <iostream>
#include <stdio.h>
#include <string>
#include "Command.h"


class InputHandler{ 
    public:
    void handleInput(SDL_Event t_events);

    private:
    Command* m_buttonX;
    Command* m_buttonY;
    Command* m_buttonA;
    Command* m_buttonB;
};


void InputHandler::handleInput(SDL_Event t_events){
    //Add the executes here. 

    if(t_events.type == SDL_KEYDOWN && t_events.key.keysym.sym == SDLK_1)
    {
        m_buttonX->execute();
    }else if(t_events.type == SDL_KEYDOWN && t_events.key.keysym.sym == SDLK_2)
    {
        m_buttonY->execute();
    }else if(t_events.type == SDL_KEYDOWN && t_events.key.keysym.sym == SDLK_3)
    {
        m_buttonA->execute();
    }else if(t_events.type == SDL_KEYDOWN && t_events.key.keysym.sym == SDLK_4)
    {
        m_buttonB->execute();
    }
    

};
