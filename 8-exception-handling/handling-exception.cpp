
#include <string>
#include <iostream>

/**
 * Error handling, C++ için oldukça önemli bir konudur. Hata yakalama işlemi, programın çalışma zamanında
 * oluşabilecek hataları kontrol etmek ve programın çökmesini engellemek için kullanılır.
 * Hatanın durumuna göre programın akışını yönlendirmek için try-catch blokları kullanılır.
 * Örneğin, bir dosya okuma işlemi sırasında dosyanın bulunamaması durumunda programın çökmesini engellemek için
 * try-catch blokları kullanılabilir.
 * 
 * Bu örnekte, eğer User bulunamazsa bir hata mesajı fırlatılacaktır. Bu hata mesajını yakalamak için try-catch
 * bloklarını kullanıyoruz. Hata mesajını da std::cerr ile standart hata çıkışına yazıyoruz.
 */


struct User
{
    int id;
    std::string name;
    std::string email;
};


void createNewUser(User* users);
User* findUserById(User* users, int id);

const int MAX_USER = 10;

int main() {
    User* users = new User[MAX_USER];

    createNewUser(users);
    
    try {
        User* u = findUserById(users, 1);

        std::cout << "User found: " << u->name << std::endl;
    } catch (const char* msg) {
        std::cerr << msg << std::endl;
    }
};

void createNewUser(User* users) {
    users[0].id = 1;
    users[0].name = "John Doe";
    users[0].email = "john.doe@example.com";
};

User* findUserById(User* users, int id) {
    for (int i = 0; i < MAX_USER; i++) {
        if (users[i].id == id) {
            return &users[i];
        }
    }

    throw "user not found!";
};