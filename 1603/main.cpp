class ParkingSystem {
public:
    vector<int> v;
    ParkingSystem(int big, int medium, int small): v({0, big, medium, small}) {}
    
    bool addCar(int carType) {
        int r = this->v[carType];
        this->v[carType]--;
        return r > 0;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
