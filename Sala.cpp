#include <iostream>
#include <vector>
#include "Componente.cpp" // Incluindo Componente.cpp
using namespace std;

class Sala {
private:
    vector<Sensor*> sensores;
    vector<Atuador*> atuadores;

public:
    void adicionarSensor(Sensor* sensor) {
        sensores.push_back(sensor);
    }

    void adicionarAtuador(Atuador* atuador) {
        atuadores.push_back(atuador);
    }

    void atualizarSensores() {
        for (auto& sensor : sensores) {
            sensor->atualizar();
        }
    }

    void atualizarAtuadores() {
        for (auto& atuador : atuadores) {
            atuador->atualizar();
        }
    }

    void exibirStatus() {
        for (auto& sensor : sensores) {
            cout << "Sensor: " << sensor->getNome() << " - Valor: " << sensor->getValor() << endl;
        }
        for (auto& atuador : atuadores) {
            cout << "Atuador: " << atuador->getNome() << " - Estado: " << (atuador->getEstado() ? "On" : "Off") << endl;
        }
    }
};
