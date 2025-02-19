// #include <SFML/Graphics.hpp>
// #include <iostream>
//
// int main() {
//     sf::RectangleShape rectangle(sf::Vector2f(200,200)); //
//     rectangle.setFillColor(sf::Color::Blue);
//
//     // 창 크기 설정
//     sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");
//     // 배경색을 설정하기 위한 색상 (흰색)
//     window.clear(sf::Color::White);
//     window.setFramerateLimit(60);
//
//     // 창이 열려 있는 동안 실행
//     while (window.isOpen()) {
//         // 이벤트 처리
//         sf::Event event;
//         while (window.pollEvent(event)) {
//             // 창을 닫는 이벤트 처리
//             if (event.type == sf::Event::Closed) {
//                 window.close();
//                 std::cout << "Closing..." << std::endl;
//             }
//         }
//
//         // 화면에 그리기
//         window.clear(sf::Color::White);  // 배경을 흰색으로 설정
//         // 여기서 게임 요소들을 그릴 수 있음
//
//         window.draw(rectangle);
//
//         window.display();  // 화면에 내용을 표시
//     }
//
//     return 0;
// }
