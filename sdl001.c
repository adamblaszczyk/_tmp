#include <stdio.h>
#include <SDL2/SDL.h>

int main() {

  printf("\n");

  if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
    printf("SDL_Init OK!\n");
  } else {
    printf("SDL_Init Error!!!\n");
  }

  SDL_Window* window = SDL_CreateWindow(
      "My SDL 001",
      SDL_WINDOWPOS_CENTERED,
      SDL_WINDOWPOS_CENTERED,
      300,
      200,
      SDL_WINDOW_OPENGL  //SDL_WINDOW_BORDERLESS
  );
  
  if (!window) {
    printf("Error creating SDL Window!!!\n");
    return 0;
  }

  SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
  
  if (!renderer) {
    printf("Error creating SDL Renderer!!!\n");
    return 0;
  }
  
  printf("Game is running...\n");
  
  SDL_Delay(5000);
    
  return 0;
  
}

