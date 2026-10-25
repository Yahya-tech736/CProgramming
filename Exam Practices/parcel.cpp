#include <iostream>
#include <string>

class Parcel {

    private:
        std::string trackingID;
        double weightKG;
        bool isExpress;
        static int activeParcels;
    public:
        Parcel() {
            trackingID = "TRK-0000";
            weightKG = 1.0;
            isExpress = false;
            activeParcels++;
        }

        Parcel(std::string trackingID, double weightKG, bool isExpress) {
            this->trackingID = trackingID;
            this->weightKG = weightKG;
            this->isExpress = isExpress;
            activeParcels++;
        }

        ~Parcel() {
            activeParcels--;
        }

        void markExpress() {
            isExpress = true;
        }

        void markStandard() {
            isExpress = false;
        }

        void printInfo() const {
            std::cout << "Tracking ID: " << trackingID << " | Weight(KG): "
                << weightKG << " | Shipping: " << (isExpress ? "True" : "False") << std::endl;
        }

        bool isOverWeight() const {
            if (weightKG > 20) {
                return true;
            } else {
                return false;
            }
        }

        static int getActiveParcels() {
            return activeParcels;
        }
};

int Parcel::activeParcels = 0;

void classifyParcel(const Parcel& p) {
    if (p.isOverWeight()) {
        std::cout << "Heavy Freight - Surcharge Applies" << std::endl;
    } else {
        std::cout << "Standard Weight" << std::endl;
    }
}

int main() {

    std::cout << "Active parcels: " << Parcel::getActiveParcels() << std::endl;

    Parcel staticArray[3] = {
        Parcel("TRK-1111", 11, true),
        Parcel("TRK-2222", 22, false),
        Parcel("TRK-1943", 3, true)
    };

    Parcel* dynamicArray = new Parcel[2]{
        Parcel("TRK-1933", 1, true),
        Parcel("TRK-2006", 23, true)
    };

    std::cout << "Active parcels: " << Parcel::getActiveParcels() << std::endl;

    dynamicArray[0].printInfo();
    dynamicArray[1].printInfo();

    classifyParcel(dynamicArray[0]);
    classifyParcel(dynamicArray[1]);

    delete [] dynamicArray;

    std::cout << "Active parcels: " << Parcel::getActiveParcels() << std::endl;

    return 0;
}