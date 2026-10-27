#include <iostream>

class ServerNode {
    private:
        std::string hostname;
        double cpuUsage;
        bool isActive;
    public:
        ServerNode() {
            this->hostname = "Unconfigured";
            this->cpuUsage = 0.0;
            this->isActive = false;
        }

        ServerNode(std::string h, double c, bool a) : hostname(h), cpuUsage(c), isActive(a) {
            this->hostname = hostname;
            this->cpuUsage = cpuUsage;
            this->isActive = isActive;
        }

        void activate() {
            isActive = true;
        }

        void deactivate() {
            isActive = false;
        }

        void printDetails() const {
            std::cout << "Server Hostname: " <<
            hostname << " | CPU Usage: " << cpuUsage <<
            " | Activitiy: " << isActive << std::endl;
        }

        bool isOverloaded() const {
            if (cpuUsage > 80.0) {
                return true;
            } else {
                return false;
            }
        }
};

void evaluateNode(const ServerNode& node) {
    if (node.isOverloaded()) {
        std::cout << "WARNING: High Load" << std::endl;
    } else {
        std::cout << "Normal Load" << std::endl;
    }
}

int main() {
    // 1. Stack array allocation
    ServerNode Node[3] = {
        ServerNode("Kristen's Computer", 99.99, false),
        ServerNode("Kenisha's Komplexities", 43.21, true),
        ServerNode("Kristian's washed", 0.00, false)
    };

    // 2. Dynamic heap allocation
    ServerNode* dynamicArray = new ServerNode[2]{
        {"Ken's basket", 0.00, false},
        {"Korn's field", 78.00, true}
    };

    // 3. Print details using correct variable names
    dynamicArray[0].printDetails();
    dynamicArray[1].printDetails();

    // 4. Test evaluateNode function
    evaluateNode(Node[0]);

    // 5. Properly deallocate heap memory
    delete[] dynamicArray;

    return 0;
}