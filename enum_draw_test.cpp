//
// Created by pc on 25. 2. 18.
//

#include <vector>
#include <SFML/Graphics.hpp>
#include <iostream>

enum Suit {
    Spade,    // ♠
    Heart,    // ♥
    Diamond,  // ♦
    Club      // ♣
};

enum Value {
    Ace = 1,  // A
    Two,       // 2
    Three,     // 3
    Four,      // 4
    Five,      // 5
    Six,       // 6
    Seven,     // 7
    Eight,     // 8
    Nine,      // 9
    Ten,       // 10
    Jack,      // J
    Queen,     // Q
    King       // K
};

class Card {
public:
    Card(Suit suit, Value value) {
        this->suit = suit;
        this->value = value;

        // 이미지 경로 설정 (문양과 숫자에 맞는 카드 이미지 파일)
        std::string suitStr;
        switch (suit) {
            case Spade: suitStr = "spade"; break;
            case Heart: suitStr = "heart"; break;
            case Diamond: suitStr = "diamond"; break;
            case Club: suitStr = "club"; break;
        }

        // 카드의 텍스처 경로 설정
        std::string filename = "/home/pc/CLionProjects/OneCardGraphic/cards/" + suitStr + std::to_string(value) + ".png";
        texture.loadFromFile(filename);
        sprite.setTexture(texture);
        sprite.setScale(0.3f, 0.3f);  // 카드 크기 설정
    }

    void setPosition(float x, float y) {
        sprite.setPosition(x, y);
    }

    void draw(sf::RenderWindow& window) {
        window.draw(sprite);
    }

private:
    Suit suit;
    Value value;
    sf::Texture texture;
    sf::Sprite sprite;
};


int main() {
    std::cout << "program detected" << std::endl;

    // 카드 객체를 저장할 벡터
    std::vector<Card> hand;

    // 예시: 몇 개의 카드 추가 (문양, 숫자 지정)
    hand.push_back(Card(Spade, Ace));  // ♠A
    hand.push_back(Card(Heart, Ten));  // ♥10
    hand.push_back(Card(Diamond, King)); // ♦K
    hand.push_back(Card(Club, Jack)); // ♣J

    sf::VideoMode desktopMode = sf::VideoMode::getDesktopMode();
    sf::RenderWindow window(desktopMode, "OneCard Game");
    window.setFramerateLimit(60);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
                std::cout << "프로그램 종료" << std::endl;
            }
        }

        window.clear();  // 화면을 지우고

        // 카드들을 순차적으로 출력
        float x = 100.0f;  // 첫 번째 카드의 x 위치
        float y = 100.0f;  // 카드들의 y 위치
        for (Card& card : hand) {
            card.setPosition(x, y);
            card.draw(window);
            x += 200.0f;  // 각 카드 사이의 간격 설정
        }

        window.display();  // 화면에 그리기
    }

    return 0;
}