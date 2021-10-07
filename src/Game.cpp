#include "../include/Game.h"

Game::Game() :
    m_gameIsRunning{ false }
{
    SDL_Init(SDL_INIT_VIDEO);
    m_window = SDL_CreateWindow("SDL game-loop window", SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,SCREEN_HEIGHT,SDL_WINDOW_SHOWN); // sets the window property

    Factory* m_factory = new FruitFactory;
    std::vector<CreateObject*> friuts;
    friuts.push_back(m_factory->CreateApple());
    friuts.push_back(m_factory->CreateBanana());
    friuts.push_back(m_factory->CreateGrape());

    for(int i =0; i < friuts.size(); i++)
    {
        friuts[i]->draw();
    }
}
    
Game::~Game()
{
    cleanUp();
}
    
void Game::run()
{
    m_gameIsRunning = true;
    SDL_Event e;

    while (m_gameIsRunning)
    {
        processEvents(e);
        update();
        render();
    }
    cleanUp();
}

void Game::processEvents(SDL_Event e)
{
    while(SDL_PollEvent(&e) != 0) // checks for any activity
    {
        if(e.type == SDL_QUIT){ //if the user press the X button
            m_gameIsRunning = false;
        }
    }


    std::cout << "Processing Events" << std::endl;
}

void Game::update()
{

    std::cout << "Updating" << std::endl;
}

void Game::render()
{
    std::cout << "Rendering" << std::endl;
}

void Game::cleanUp()
{
    std::cout << "Cleaning up" << std::endl;
    //Destroy window
    SDL_DestroyWindow( m_window );

    //Quit SDL subsystems
    SDL_Quit();
}