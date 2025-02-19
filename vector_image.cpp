// //
// // Created by pc on 25. 2. 18.
// //
//
// #include <iostream>
// #include <SFML/Graphics.hpp>;
//
// int main() {
//     std::cout << "program detected" << std::endl;
//
//     sf::Texture spadeace, spade2, spade3, spade4, spade5, spade6, spade7, spade8, spade9, spade10, spadej, spadeq, spadek;
//     sf::Sprite _spadeace, _spade2, _spade3, _spade4, _spade5, _spade6, _spade7, _spade8, _spade9, _spade10, _spadej, _spadeq, _spadek;
//
//     spadeace.loadFromFile("/home/pc/CLionProjects/OneCardGraphic/cards/spadeace.png");
//     spade2.loadFromFile("/home/pc/CLionProjects/OneCardGraphic/cards/spade2.png");
//     spade3.loadFromFile("/home/pc/CLionProjects/OneCardGraphic/cards/spade3.png");
//     spade4.loadFromFile("/home/pc/CLionProjects/OneCardGraphic/cards/spade4.png");
//     spade5.loadFromFile("/home/pc/CLionProjects/OneCardGraphic/cards/spade5.png");
//     spade6.loadFromFile("/home/pc/CLionProjects/OneCardGraphic/cards/spade6.png");
//     spade7.loadFromFile("/home/pc/CLionProjects/OneCardGraphic/cards/spade7.png");
//     spade8.loadFromFile("/home/pc/CLionProjects/OneCardGraphic/cards/spade8.png");
//     spade9.loadFromFile("/home/pc/CLionProjects/OneCardGraphic/cards/spade9.png");
//     spade10.loadFromFile("/home/pc/CLionProjects/OneCardGraphic/cards/spade10.png");
//     spadej.loadFromFile("/home/pc/CLionProjects/OneCardGraphic/cards/spadej.png");
//     spadeq.loadFromFile("/home/pc/CLionProjects/OneCardGraphic/cards/spadeq.png");
//     spadek.loadFromFile("/home/pc/CLionProjects/OneCardGraphic/cards/spadek.png");
//
//
//     _spadeace.setTexture(spadeace); _spadeace.setScale(0.3, 0.3);
//     _spade2.setTexture(spade2); _spade2.setScale(0.3, 0.3);
//     _spade3.setTexture(spade3); _spade3.setScale(0.3, 0.3);
//     _spade4.setTexture(spade4); _spade4.setScale(0.3, 0.3);
//     _spade5.setTexture(spade5); _spade5.setScale(0.3, 0.3);
//     _spade6.setTexture(spade6); _spade6.setScale(0.3, 0.3);
//     _spade7.setTexture(spade7); _spade7.setScale(0.3, 0.3);
//     _spade8.setTexture(spade8); _spade8.setScale(0.3, 0.3);
//     _spade9.setTexture(spade9); _spade9.setScale(0.3, 0.3);
//     _spade10.setTexture(spade10); _spade10.setScale(0.3, 0.3);
//     _spadej.setTexture(spadej); _spadej.setScale(0.3, 0.3);
//     _spadeq.setTexture(spadeq); _spadeq.setScale(0.3, 0.3);
//     _spadek.setTexture(spadek); _spadek.setScale(0.3, 0.3);
//
//     _spadeace.setTextureRect(sf::IntRect(0, 0, 500, 726));
//     _spade2.setTextureRect(sf::IntRect(0, 0, 500, 726));
//     // _spade3.setTextureRect(sf::IntRect(400, 0, 500, 726));
//
//
//     // 너비를 계산해서 바로 옆에 카드를 위치시키는 코드
//     _spadeace.setPosition(100, 100);
//
//     float spadeaceWidth = _spadeace.getGlobalBounds().width;
//     _spade2.setPosition(100 + spadeaceWidth, 100);
//
//
//
//
//     sf::VideoMode desktopMode = sf::VideoMode::getDesktopMode();
//     // 화면 크기, 캡션 이름 설정
//     sf::RenderWindow window(desktopMode, "chanbong2");
//     window.setFramerateLimit(60);
//
//     while (window.isOpen()) {
//
//         sf::Event event;
//
//         while (window.pollEvent(event)) {
//             if (event.type == sf::Event::EventType::Closed) {
//                 window.close();
//                 std::cout << "프로그램 종료" << std::endl;
//             }
//         }
//
//         for (int i=0; i<10; i++) {
//
//         }
//
//         window.draw(_spadeace);
//         window.draw(_spade2);
//         // window.draw(_spade3);
//         window.display();
//
//     }
//     return 0;
// }