class ParkingSystem {
public:
    int big;
    int medium;
    int small;
    ParkingSystem(int b, int m, int s) {
        big = b;
        medium = m;
        small = s;
    }
    
    bool addCar(int t) {
        if(t == 1 && big)
        {
            big--; return true;
        }
        if(t == 2 && medium)
        {
            medium--; return true;
        }
        if(t == 3 && small)
        {
            small--; return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */