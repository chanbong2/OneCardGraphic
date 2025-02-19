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
//     // 화면 크기, 캡션 이름 설정
//     sf::RenderWindow window(sf::VideoMode(504, 504), "https://maincodes.tistory.com/");
//     window.setFramerateLimit(60);
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
//             std::cout << "ai_timer..." << std::endl;
//         }
//
//         if (interval > delay1) {
//             std::cout << "interval = " << interval << " count = " << count << std::endl;
//             interval = 0;
//             count++;
//         }
//
//         if (((int)interval % 2) == 0)
//             window.clear(sf::Color::White);
//         else
//             window.clear(sf::Color::Blue);
//
//         window.display();
//     }
//     return 0;
// }
