class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, double>> cars;
        
        // Populate the cars vector with position and calculated time to reach the target
        for (int i = 0; i < position.size(); i++) {
            double time = (double)(target - position[i]) / speed[i];
            cars.push_back({position[i], time});
        }
        
        // Sort cars based on their starting position in descending order
        sort(cars.begin(), cars.end(), [](const pair<int, double>& a, const pair<int, double>& b) {
            return a.first > b.first;
        });
        
        // Count the number of fleets
        int fleet_count = 0;
        double last_time = 0.0;
        
        for (const auto& car : cars) {
            double current_time = car.second;
            if (current_time > last_time) {
                fleet_count++;
                last_time = current_time;
            }
        }
        
        return fleet_count;
    }
};
