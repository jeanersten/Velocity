#include "game.h"

#include <SFML/Graphics.hpp>

void Game::run()
{
  auto window = sf::RenderWindow(sf::VideoMode({640, 480}), "Velocity Engine v0.1");
  window.setFramerateLimit(60);

  while (window.isOpen())
  {
    while (const std::optional event = window.pollEvent())
    {
      if (event->is<sf::Event::Closed>())
      {
        window.close();
      }
    }

    window.clear();
    window.display();
  }
}
