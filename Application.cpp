#include <SFML/Graphics.hpp>

int main(){
    sf::RenderWindow window(sf::VideoMode(800, 600), "Pong Game");
    window.setFramerateLimit(60);

    sf::RectangleShape leftPaddle(sf::Vector2f(20, 100));
    leftPaddle.setPosition(100,100);
    leftPaddle.setFillColor(sf::Color::White);
    
    sf::RectangleShape rightPaddle(sf::Vector2f(20, 100));
    rightPaddle.setPosition(730, 250);
    rightPaddle.setFillColor(sf::Color::White);

    while(window.isOpen()){
        window.draw(leftPaddle);
        window.draw(rightPaddle);
    }
}