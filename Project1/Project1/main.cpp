#include <iostream>
#include <map>
#include <vector>

struct Player {
    std::string name;
    float power;
};

std::map<std::string, std::vector<Player>> clans;

void addPlayerToClan(const std::string& clanName, const std::string& playerName, float playerPower) {
    clans[clanName].push_back({ playerName, playerPower });
}

size_t getPlayerCount(const std::string& clanName) {
    if (clans.find(clanName) != clans.end()) {
        return clans[clanName].size();
    }
    else {
        return 0;
    }
}

int clanFight(const std::string& firstClanName, const std::string& secondClanName) {
    float firstClanPower = 0, secondClanPower = 0;
    for (const auto& player : clans[firstClanName]) {
        firstClanPower += player.power;
    }
    for (const auto& player : clans[secondClanName]) {
        secondClanPower += player.power;
    }
    if (firstClanPower > secondClanPower) {
        return 1;
    }
    else if (firstClanPower < secondClanPower) {
        return -1;
    }
    else {
        return 0;
    }
}

int main() {

    addPlayerToClan("Clan1", "Player1", 10.0f);
    addPlayerToClan("Clan1", "Player2", 20.0f);
    addPlayerToClan("Clan2", "Player3", 30.0f);
    addPlayerToClan("Clan2", "Player4", 40.0f);


    std::cout << "Player in Clan1: " << getPlayerCount("Clan1") << std::endl;
    std::cout << "Players in Clan2: " << getPlayerCount("Clan2") << std::endl;


    int result = clanFight("Clan1", "Clan2");
    if (result == 1) {
        std::cout << "Win Clan1" << std::endl;
    }
    else if (result == -1) {
        std::cout << "Win Clan2" << std::endl;
    }
    else {
        std::cout << "Tie" << std::endl;
    }

    return 0;
}
