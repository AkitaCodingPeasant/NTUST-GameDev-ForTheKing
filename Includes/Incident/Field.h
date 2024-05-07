#include "../HeaderPack.h"

class Field {
private:
    Dice                dice;               // Dice
    uint8_t             enemyPlayerNumbers; // Count of Enemy
    std::vector<Enemy*> enemyEngage;        // Engage Enemys
    uint8_t             rolePlayerNumbers;  // Count of Role
    std::vector<Role*>  roleEngage;         // Engage Roles
    uint8_t             turn;               // Current Turn
    uint8_t             round;              // Current Round

private:
    // Detect Status and Compute
    void ProbeStatus(uint8_t);

public:
    // ...
};