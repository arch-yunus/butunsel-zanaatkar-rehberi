/**
 * @file pid_controller.cpp
 * @brief Phase 03: Robotics & Control - PID Controller Implementation.
 * 
 * Tesla Metodu: Hata payını zihinsel ve matematiksel simülasyonla sıfıra indirmek.
 */

#include <iostream>
#include <chrono>
#include <thread>

class PIDController {
public:
    PIDController(double Kp, double Ki, double Kd)
        : kp(Kp), ki(Ki), kd(Kd), prev_error(0), integral(0) {}

    double calculate(double setpoint, double pv, double dt) {
        double error = setpoint - pv;
        integral += error * dt;
        double derivative = (error - prev_error) / dt;
        double output = kp * error + ki * integral + kd * derivative;
        prev_error = error;
        return output;
    }

private:
    double kp, ki, kd;
    double prev_error;
    double integral;
};

int main() {
    std::cout << "--- Tesla Kontrol Dongusu Baslatiliyor ---" << std::endl;

    PIDController pid(1.0, 0.1, 0.05);
    double current_value = 0.0;
    double target = 100.0;
    double dt = 0.1;

    for (int i = 0; i < 50; ++i) {
        double output = pid.calculate(target, current_value, dt);
        current_value += output * 0.1; // Basit bir sistem tepkisi simülasyonu

        std::cout << "Adim " << i << ": Mevcut Deger = " << current_value 
                  << " | Cikis = " << output << std::endl;

        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }

    std::cout << "Hedefe ulasildi. Zihinsel simülasyon basarili." << std::endl;
    return 0;
}
