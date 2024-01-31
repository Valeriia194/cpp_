#include <iostream>
#include <vector>

class DamageHealingStats {
    std::vector<int> data;

public:
    void input() {
        int num;
        std::cout << "Enter the numbers (positive - damage, negative - heal), 123 for finish: "<<std::endl;
        while (std::cin >> num && num != 123) {
            data.push_back(num);
        }
    }

    void maxDamage() {
        int maxIndex = 0;
        for (int i = 1; i < data.size(); i++) {
            if (data[i] > data[maxIndex]) {
                maxIndex = i;
            }
        }
        std::cout << "Most damage number: " << maxIndex + 1 << std::endl;
    }

    void minDamage() {
        int minIndex = 0;
        for (int i = 1; i < data.size(); i++) {
            if (data[i] < data[minIndex]) {
                minIndex = i;
            }
        }
        std::cout << "Less damage number: " << minIndex + 1 << std::endl;
    }

    void healing() {
        std::cout << "Healing on turn number: ";
        for (int i = 0; i < data.size(); i++) {
            if (data[i] < 0) {
                std::cout << i + 1 << " ";
            }
        }
        std::cout << std::endl;
    }

    void total(bool isDamage) {
        int total = 0;
        for (int i = 0; i < data.size(); i++) {
            if ((isDamage && data[i] > 0) || (!isDamage && data[i] < 0)) {
                total += data[i];
            }
        }
        std::cout << "Total " << (isDamage ? "damage: " : "healing: ") << total << std::endl;
    }

    void noEffect() {
        for (int i = 0; i < data.size(); i++) {
            if (data[i] == 0) {
                std::cout << "Nothing happen on turn number: " << i + 1 << std::endl;
            }
        }
    }
};

int main() {
    DamageHealingStats stats;
    stats.input();
    stats.maxDamage();
    stats.minDamage();
    stats.healing();
    stats.total(true);
    stats.total(false);
    stats.noEffect();
    return 0;
}
