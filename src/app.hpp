#pragma once
#include <memory>
#include <SDL3/SDL.h>

class App{

    private:


        std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)> window{nullptr, SDL_DestroyWindow};

        bool running{true};

    public:
        App();
        ~App();

        void Init();
        void Run();

};
