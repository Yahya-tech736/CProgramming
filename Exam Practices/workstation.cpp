#include <iostream>
#include <string>

class WorkStation {
private:
    std::string hostName;
    int ramGB;
    bool isOccupied;
    static int totalWorkstations;

public:
    WorkStation() {
        hostName = "Lab-PC";
        ramGB = 16;
        isOccupied = false;
        totalWorkstations++;
    }

    WorkStation(std::string hostName, int ramGB, bool isOccupied) {
        this->hostName = hostName;
        this->ramGB = ramGB;
        this->isOccupied = isOccupied;
        totalWorkstations++;
    }

    ~WorkStation() {
        totalWorkstations--;
    }

    void login() {
        isOccupied = true;
    }

    void logout() {
        isOccupied = false;
    }

    void printDetails() const {
        std::cout << "Host Name: " << hostName
                  << " | Ram: " << ramGB << " GB | Occupied Status: "
                  << (isOccupied ? "True" : "False") << std::endl;
    }

    bool isHighPerformance() const {
        return ramGB >= 32;
    }

    static int getTotalWorkstations() {
        return totalWorkstations;
    }
};

int WorkStation::totalWorkstations = 0;

void evaluateWorkstation(const WorkStation& w) {
    if (w.isHighPerformance()) {
        std::cout << "High Performance" << std::endl;
    } else {
        std::cout << "Standard Performance" << std::endl;
    }
}

int main() {
    std::cout << "Initial Total Workstations: " << WorkStation::getTotalWorkstations() << std::endl;

    WorkStation staticArray[3] = {
        WorkStation("tinkywinky", 19, true),
        WorkStation("schizophrenic little munchkin", 33, true),
        WorkStation("fuegey", 16, false)
    };

    std::cout << "Total after static array: " << WorkStation::getTotalWorkstations() << std::endl;

    WorkStation* dynamicArray = new WorkStation[2]{
        WorkStation("hp", 31, true),
        WorkStation("dell", 48, false)
    };

    std::cout << "Total after dynamic array: " << WorkStation::getTotalWorkstations() << std::endl;

    for (int i = 0; i < 2; i++) {
        dynamicArray[i].printDetails();
        evaluateWorkstation(dynamicArray[i]);
    }

    delete[] dynamicArray;
    dynamicArray = nullptr;

    std::cout << "Total after deleting dynamic array: " << WorkStation::getTotalWorkstations() << std::endl;

    return 0;
}
