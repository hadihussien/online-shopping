#include <iostream>
#include <string>
#include <vector>
#pragma once

/**
 * @file  Customer.h
 * @brief The header file of the Persona class
 * @copyright ЗАО "АБС"
 * @author 
 * @date 10.08.2024
 * @version 1.12.0
 * \par Использует классы:
 * @ref Customer
 * \par Содержит класс:
 * @ref Customer
 */
/// класс Описания клиентов
/** Содержит данные о клиентах и методы работы с ними
   */ 
class Customer {
private:
    int identifier;   ///<идентификатор
    std::string name;   ///< полное имя Клиента
    std::string email;  ///< электронная почта
    std::string address;///< адрес
    std::vector<std::string> cart; // To hold products in the cart

public:
    // Конструктор создает пользователя с базовой информацией 
    /** Создает клиента и инициализирует его поля
    \параметр- id  идентификатор создаваемого клиента
    \параметр -name  полное имя создаваемого клиента 
    \параметр -email  электронная почта создаваемого клиента
    \параметр -address адрес создаваемого клиента
*/
    Customer(int id, const std::string& name, const std::string& email, const std::string& address)
        : identifier(id), name(name), email(email), address(address) {}

    /// Способ просмотра продуктов 
    void viewProducts() {
        std::cout << "Viewing products..." << std::endl;
        // Реализация для отображения продуктов будет осуществляться здесь
    }
    /// Способ добавления товара в корзину
    /**
     * параметр -product Этот параметр является постоянной ссылкой на строку, 
     * представляющую название или идентификатор товара, 
     * который будет добавлен в корзину 
     */
    void addToCart(const std::string& product) {
        cart.push_back(product);
        std::cout << product << " added to cart." << std::endl;
    }

    /// Способ удаления товара из корзины
    /**
     * Эта функция выполняет поиск данного товара в корзине и удаляет его,если он найден.
     * Если товар не найден, отображается сообщение о том, что товара нет в корзине.
     */
    void removeFromCart(const std::string& product) {
        auto it = std::find(cart.begin(), cart.end(), product);
        if (it != cart.end()) {
            cart.erase(it);
            std::cout << product << " removed from cart." << std::endl;
        } else {
            std::cout << product << " not found in cart." << std::endl;
        }
    }

    /// Способ размещения заказа 
    void placeOrder() {
        std::cout << "Order placed!" << std::endl;
        /// Реализация для размещения заказа будет осуществляться здесь
    }
};
/// класс описания платежа
/** Содержит платежные данные 
   */

class Payment {
private:
    int customerId; ///<идентификатор
    std::string cardType; ///<Тип карточки
    std::string nameOnCard; ///<имя клиента на карточке
    std::string cardNumber; ///<номер карты

public:
    // Конструктор создает платеж с базовой информацией 
    /** Создает платеж и инициализирует его поля
    \параметр- customerId идентификатор создаваемого клиента
    \параметр -cardType тип создаваемого карточки 
    \параметр -nameOnCard полное имя создаваемого клиента
    \параметр -cardNumber номер карты создаваемого карточки
*/
    Payment(int customerId, const std::string& cardType, const std::string& nameOnCard, const std::string& cardNumber)
        : customerId(customerId), cardType(cardType), nameOnCard(nameOnCard), cardNumber(cardNumber) {}
};

/// класс описания заказа
/** Содержит данные о заказе 
   */

class Order {
private:
    int orderId; ///<идентификатор заказа
    int orderNumber; ///<номер заказа
    std::string assignedDate; ///<назначенная дата
    std::string orderStatus; ///<статус заказа

public:
    // Конструктор создает приказ с базовой информацией 
    /** Создает приказ и инициализирует его поля
    \параметр- orderId идентификатор создаваемого приказа
    \параметр -orderNumber тип создаваемого приказа 
    \параметр -assignedDate полное имя создаваемого приказа
    \параметр -orderStatus номер карты создаваемого приказа
*/
    Order(int orderId, int orderNumber, const std::string& assignedDate, const std::string& orderStatus)
        : orderId(orderId), orderNumber(orderNumber), assignedDate(assignedDate), orderStatus(orderStatus) {}
   
};