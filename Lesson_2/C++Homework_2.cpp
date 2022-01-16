#include <iostream>

  // 1. Создать и инициализировать переменные пройденных типов данных (short int, int, long long, char, bool, float, double).
    
    short int x{ 10000 };
    int a{ 500 };
    int b{ 1000 };
    int c{ 1500 };
    char ch = 'a';
    bool flag = true;
    long long aa = 1;
    float bb = 1.23f;
    double cc = 3.14;


    
  // 2. Создать перечисление (enum) с возможными вариантами символов для игры в крестики-нолики.
    
    enum tic_tac_toe {cross, zero, empty};



  // 3. Создать массив, способный содержать значения такого перечисления и инициализировать его.
    int main() {
      
        tic_tac_toe player_1[1] = {cross};
        tic_tac_toe player_2[1] = {zero};
        tic_tac_toe empty_place[1] = {empty};

        std::cout << "player_1 movie:" << player_1[0] << std::endl;
        std::cout << "player_2 movie:" << player_2[0] << std::endl;
        std::cout << "empty_place:" << empty_place[0] << std::endl;

        player_1[0] = cross;
        player_2[0] = zero;
        empty_place[0] = empty;
        

        char board[9] = { '-', '-', '-', '-', '-', '-', '-', '-', '-' };
        
            std::cout << "-1-|-2-|-3-" << std::endl;
            std::cout << "-4-|-5-|-6-" << std::endl;
            std::cout << "-7-|-8-|-9-" << std::endl;
            std::cout << "\n";

            std::cout << "game_board: " << std::endl;
            std::cout << "-" << board[0] << "-|-" << board[1] << "-|-" << board[2]<<"-\n";
            std::cout << "-" << board[3] << "-|-" << board[4] << "-|-" << board[5]<<"-\n";
            std::cout << "-" << board[6] << "-|-" << board[7] << "-|-" << board[8]<<"-\n";

                

  // 4. * Создать структуру (struct) данных «Поле для игры в крестики-нолики» и снабдить его всеми необходимыми свойствами (подумайте что может понадобиться).

    //    struct Tic_tac_toe // Игра в крестики нолики
    //    {
    //        long nickname; // Ник игрока
    //        unsigned short age; // возраст игрока
    //        double number_of_wins; // количество побед
    //    };








    }



