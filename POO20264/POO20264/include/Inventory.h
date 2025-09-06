#pragma once

#include"Prerequisites.h"
#include "Item.h"

class
Inventory
{
public:
	Inventory() = default;
	~Inventory() = default;

    void addItem(const std::string& name, int quantity) {
        // Se busca que exista el elemento a agregar para incrementar su cantidad
        for (auto& item : m_Item) {
            if (item.getName() == name) {
                item.add(quantity);
                return;
            }
        }

        // Si no existe se agrega un nuevo item
        m_Item.emplace_back(name, quantity);
    }

    void
     showInventory() const {
        if (m_Item.empty()) {
            std::cout << "El inventariio está vacío" << std::endl;
            return;
        }

        std::cout << "Inventario" << std::endl;
        for (const auto& item : m_Item) {
            std::cout << "- " << item.getName() << ": " << item.getQuantity() << std::endl;
        }
    }

    void 
        useItem(const std::string name, int quantity) {
        for (auto& item : m_Item) {
            if (item.getName() == name) {
                item.remove(quantity);

                if (item.getQuantity() == 0) {
                    //m_Item.erase(std::remove(m_Item.begin(), m_Item.end(), item), m_Item.end());
            }
                std::cout << "Ussaste " << quantity << " de " << name << "(S)." << std::endl;
                return;
            }
        }
    }

private:
	std::vector<Item> m_Item;
};
