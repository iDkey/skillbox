//
// Created by jollu on 12/17/21.
//

#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;


namespace task_3 {
    double res(double dist, int temp_buff, double run_time) {
        temp_buff = run_time;
        return dist / ((temp_buff * 60 + (run_time - temp_buff) * 100) / 3.6);
    }

    void task1() {
        double dist = 0;
        double result = 0;
        cout << "Distance, metr: ";
        cin >> dist;
        double run_time = 0;
        int temp_buff = 0;
        cout << "Time, min.sec: ";
        cin >> run_time;
        result = res(dist, temp_buff, run_time);
        cout << "You speed run: " << round(result * 100) / 100 << " km/h" << endl;
    }
}
