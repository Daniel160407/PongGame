#include <SFML/Graphics.hpp>

int main(){
    sf::RenderWindow window(sf::VideoMode(800, 600), "Pong Game");
    window.setFramerateLimit(60);

    sf::RectangleShape leftPaddle(sf::Vector2f(20, 100));
    leftPaddle.setPosition(50, 250);
    leftPaddle.setFillColor(sf::Color::White);
    
    sf::RectangleShape rightPaddle(sf::Vector2f(20, 100));
    rightPaddle.setPosition(730, 250);
    rightPaddle.setFillColor(sf::Color::White);

    sf::CircleShape ball(10);
    ball.setPosition(390, 290);
    ball.setFillColor(sf::Color::White);

    float ballSpeedX = -4;
    float ballSpeedY = -4;

    while(window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)){
            if(event.type == sf::Event::Closed){
                window.close();
            }
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::W) && leftPaddle.getPosition().y > 0){
            leftPaddle.move(0, -5);
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::S) && leftPaddle.getPosition().y + leftPaddle.getSize().y < window.getSize().y){
            leftPaddle.move(0, 5);
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && rightPaddle.getPosition().y > 0){
            rightPaddle.move(0, -5);
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && rightPaddle.getPosition().y + rightPaddle.getSize().y < window.getSize().y){
            rightPaddle.move(0, 5);
        }

        window.clear();

        window.draw(leftPaddle);
        window.draw(rightPaddle);
        window.draw(ball);

        window.display();
    }
}