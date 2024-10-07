#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Componente.cpp" // Incluindo Componente.cpp
#include "Sala.cpp" // Incluindo Sala.cpp

using namespace std;

int main() {
    srand(time(0)); // Inicializa a semente para geração de números aleatórios

    Sala sala1, sala2, sala3;

    // Configuração da sala 1
    sala1.adicionarSensor(new Temperatura());
    sala1.adicionarSensor(new Luminosidade());
    sala1.adicionarAtuador(new Ventilador());
    sala1.adicionarAtuador(new Lampada());

    // Configuração da sala 2
    sala2.adicionarSensor(new Umidade());
    sala2.adicionarSensor(new Temperatura());
    sala2.adicionarAtuador(new Umidificador());
    sala2.adicionarAtuador(new Desumidificador());

    // Configuração da sala 3
    sala3.adicionarSensor(new Luminosidade());
    sala3.adicionarSensor(new Umidade());
    sala3.adicionarAtuador(new Ventilador());
    sala3.adicionarAtuador(new Lampada());

    // Loop de atualização
    for (int i = 0; i < 1440; ++i) {
        cout << "Atualização " << i + 1 << endl;

        sala1.atualizarSensores();
        sala1.atualizarAtuadores();
        sala1.exibirStatus();

        sala2.atualizarSensores();
        sala2.atualizarAtuadores();
        sala2.exibirStatus();

        sala3.atualizarSensores();
        sala3.atualizarAtuadores();
        sala3.exibirStatus();

        cout << "-----------------------------" << endl;
    }

    return 0;
}
