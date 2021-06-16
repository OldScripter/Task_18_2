#include <iostream>

int GetRabbitWays(int stair_num)
{
    if (stair_num == 0) return 1; // He will just stay still
    if (stair_num == 1) return 1;
    if (stair_num == 2) return 2;

    return  GetRabbitWays(stair_num - 1) +
            GetRabbitWays(stair_num - 2) +
            GetRabbitWays(stair_num - 3);
}

int main() {
    int stair_number = 3;
    std::cout << "Rabbit is trying to reach the stair number " << stair_number << ".\n";
    std::cout << "He can do it in " << GetRabbitWays(stair_number) << " different ways.\n";
    return 0;
}
