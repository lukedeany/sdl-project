#include "app.hpp"
#include <iostream>
#include <memory>
#include <SDL3/SDL.h>

App::App() {
    SDL_Init(SDL_INIT_VIDEO);

    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 4);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 6);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);

    window.reset(SDL_CreateWindow("SDL Project", 800, 600, SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE));

    std::cout << (SDL_GetError());
}

App::~App() {
    SDL_Quit();
}

void App::Init() {}

void App::Run() {
    SDL_ShowWindow(window.get());

    while (running) {
        for (SDL_Event event; SDL_PollEvent(&event);) {
            if (event.type == SDL_EVENT_QUIT) running = false;
        }
    }
}
