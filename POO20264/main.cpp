#include "Prerequisites.h"
//Crear clase character
class
    character {
public:
    character(int healt) : m_health(healt) {}

    void
        rebirth() {
        if (!isCharacterAlive && m_health <= 0) {
            std::cout << "El character a arevivido en el spawn point" << std::endl;
            isCharacterAlive = true;
        }
    }

    int
        getHealth() const {
        return m_health;
    }

    void
        setHealt(int health) {
        m_health = health;
    }

private:
    bool isCharacterAlive = false;

protected:
    int m_health;
};

//this funtion is in charge of being the entry point of the app.
int
main() {
    character pepe(150);
    pepe.getHealth();
    std::cout << pepe.getHealth() << std::endl;
    pepe.setHealt(-50);
    std::cout << pepe.getHealth() << std::endl;

    if (pepe.getHealth() <= 0) {
        std::cout << "El pepe, murio" << std::endl;
        pepe.rebirth();
    }
    std::cout << "Hello world" << std::endl;
    return 0;
}