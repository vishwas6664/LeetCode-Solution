class Solution {
public:
    vector<double> convertTemperature(double c) {
        double k=(c+273.15000);
        double f=(c*1.80000+32.00000);
        return {k,f};
    }
};
