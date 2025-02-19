// //
// // Created by pc on 25. 2. 18.
// //
//
// #include <SFML/Graphics.hpp>
// #include <iostream>
//
// int main()
// {
//     sf::Clock clock;
//     sf::Clock ai_timer;
//     float interval = 0, delay1 = 4.0;
//     int count = 0;
//
//     const sf::Time ai_time = sf::seconds(0.5f);
//
//     std::cout << "프로그램 감지" << std::endl;
//
//
//     sf::Texture texture_spadeace, texture_heartace;
//     sf::Sprite sprite_spadeace, sprite_heartace;
//
//     texture_spadeace.loadFromFile("/home/pc/CLionProjects/OneCardGraphic/cards/spadeace.png");
//     texture_heartace.loadFromFile("/home/pc/CLionProjects/OneCardGraphic/cards/heartace.png");
//
//     sprite_spadeace.setTexture(texture_spadeace);
//     sprite_spadeace.setScale(0.3, 0.3); // 크기 비율 설정 (0.3배 0.3배)
//     sprite_spadeace.setTextureRect(sf::IntRect(0, 0, 500, 726)); // 0, 0 위치에그림파일을 500, 726 사이즈로 출력
//
//
//     sprite_heartace.setTexture(texture_heartace);
//     sprite_heartace.setTextureRect(sf::IntRect(0, 0, 500, 726));
//
//     sf::VideoMode desktopMode = sf::VideoMode::getDesktopMode();
//     // 화면 크기, 캡션 이름 설정
//     sf::RenderWindow window(desktopMode, "chanbong2");
//     window.setFramerateLimit(60);
//
//     while (window.isOpen()) {
//         float time = clock.getElapsedTime().asSeconds();
//         clock.restart();
//
//         interval += time;
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
//         if (ai_timer.getElapsedTime() > ai_time) {
//             ai_timer.restart();
//             std::cout << "ai_timer restart" << std::endl;
//         }
//
//         if (interval > delay1) {
//             std::cout << "interval = " << interval << " count = " << count << std::endl;
//             interval = 0;
//             count++;
//         }
//
//         if (((int)interval % 2) == 0)
//             window.draw(sprite_spadeace);
//         else
//             window.draw(sprite_heartace);
//
//         window.display();
//     }
//     return 0;
// }
