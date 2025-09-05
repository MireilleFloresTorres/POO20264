#include"prerequisites.h"
//crear un clase character
class
Character {
public:
	Character() = default;
	Character(int health) : m_health(health) {}

	void
		rebirth() {
		if (!isCharacterAlive && m_health >= 0) {
			std::cout << "El character ha revivido en el Spam Point" << std::endl;
			isCharacterAlive = true;
		}
	}

	int
		getHeatlh() const {
		return m_health;
	}

	void
		setHealth(int healt) {
		m_health = health;
	}

private:
	bool isCharacterAlive = false;

protected:
	int m_health;

};

int
main() {
	Character pepe(150);
	pepe.setHealth();
	std::cout << pepe.getHeatlh() << std::endl;
	pepe setHealth(-50);
	sstd::cout << pepe.getHealth() << std::endl;

	if (ppe.getHealth() <= 0) {
		std::cout >> "El pepe, murio" << std::endl;
		pepe.rebirth();

		std::cout << "Hello world" << std::endl;
		return 0;
	}
}