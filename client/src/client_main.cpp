#include <iostream>
#include <lib.hpp>
#include <gui.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>

#ifdef main
#undef main
#endif

using namespace std;

int main()
{
    cout << "I am a client" << endl;
    some_lib_function();
    some_gui_function();
    sf::RenderWindow window(sf::VideoMode(800, 600), "Strikeback", sf::Style::Close);
    window.setVerticalSyncEnabled(true);
    window.setActive(true);
    sf::Clock deltaClock;
    float dT = 0;
    sf::RectangleShape shape(sf::Vector2f(780, 580));
    shape.setPosition(10, 10);
    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window.close();
            if(event.type == sf::Event::KeyPressed)
                if(event.key.code == sf::Keyboard::Escape)
                    window.close();
        }
        glClearColor(1, 0, 1, 1);
        glClear(GL_COLOR_BUFFER_BIT);
        //Draw game
        window.pushGLStates();
        window.draw(shape);
        //Draw gui
        window.popGLStates();
        window.display();
        dT = deltaClock.restart().asSeconds();
    }
}
