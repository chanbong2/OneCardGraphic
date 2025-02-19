// #include <SFML/Graphics.hpp>
// #include <iostream>
//
// int textPrint(sf::Text& textMsg, sf::Font& font, int size, float x, float y, const sf::Color& color, const sf::Color& outColor, std::string p) {
//     textMsg.setFont(font);
//     textMsg.setCharacterSize(size);
//     textMsg.setPosition(x, y);
//     textMsg.setFillColor(color);
//     textMsg.setOutlineColor(outColor);
//     textMsg.setOutlineThickness(1.f);
//     textMsg.setString(p);
//
//     return 0;
// }
//
// int main() {
//     sf::Text text1, text2, text3;
//     sf::Uint8 r = 0, g = 0, b = 0;
//     std::string msgStr = "Ready, Go! maincodes!!";
//     int x = 0, y = 0;
//
//     sf::Clock clock;
//     float interval = 0;
//
//     std::cout << "program has started" << std::endl;
//
//     sf::VideoMode desktopMode = sf::VideoMode::getDesktopMode();
//     sf::RenderWindow window(desktopMode, "chanbong2");
//     window.setFramerateLimit(60);
//
//     sf::Font font;
//     font.loadFromFile("/home/pc/CLionProjects/OneCardGraphic/fonts/RobotoSlab-Regular.ttf");
//
//     textPrint(text1, font, 30, 0, 0, sf::Color::Yellow, sf::Color::White, msgStr);
//     textPrint(text2, font, 30, 0, 0, sf::Color::White, sf::Color::White, msgStr);
//     textPrint(text3, font, 30, 0, 0, sf::Color::Blue, sf::Color::White, msgStr);
//
//     while (window.isOpen()) {
//         float time = clock.getElapsedTime().asSeconds();
//         clock.restart();
//
//         interval += time;
//         sf::Event event;
//
//         while (window.pollEvent(event)) {
//             if (event.type == sf::Event::Closed) {
//                 window.close();
//                 std::cout << "closed" << std::endl;
//             }
//         }
//
//         window.clear(sf::Color::Black);
//
//         if (((int)interval % 2) == 0) {
//             x += 1.0;
//             y += 1.0;
//             text1.setPosition(x, y);
//             sf::Vector2f pos = text1.getPosition();
//             std::cout << "pos.x = "<< pos.x << " pos.y = "<< pos.y << std::endl;
//         }
//
//         window.draw(text1);
//         window.draw(text2);
//         window.draw(text3);
//
//         window.display();
//     }
//
//     return 0;
// }