#ifndef COMPONENTE_CPP
#define COMPONENTE_CPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
using namespace std;

class Sensor {
private:
    string nome;
    float valor;

public:
    Sensor(const string& nome) : nome(nome), valor(0.0) {}

    void atualizar() {
        valor = static_cast<float>(rand() % 100); // Valor aleatório entre 0 e 99
    }

    string getNome() const {
        return nome;
    }

    float getValor() const {
        return valor;
    }
};

class Atuador {
private:
    string nome;
    bool estado;

public:
    Atuador(const string& nome) : nome(nome), estado(false) {}

    void atualizar() {
        estado = !estado; // Alterna o estado
    }

    string getNome() const {
        return nome;
    }

    bool getEstado() const {
        return estado;
    }
};

// Classes de sensores
class Temperatura : public Sensor {
public:
    Temperatura() : Sensor("Temperatura") {}
};

class Luminosidade : public Sensor {
public:
    Luminosidade() : Sensor("Luminosidade") {}
};

class Umidade : public Sensor {
public:
    Umidade() : Sensor("Umidade") {}
};

// Classes de atuadores
class Ventilador : public Atuador {
public:
    Ventilador() : Atuador("Ventilador") {}
};

class Lampada : public Atuador {
public:
    Lampada() : Atuador("Lampada") {}
};

class Umidificador : public Atuador {
public:
    Umidificador() : Atuador("Umidificador") {}
};

class Desumidificador : public Atuador {
public:
    Desumidificador() : Atuador("Desumidificador") {}
};

#endif // COMPONENTE_CPP
