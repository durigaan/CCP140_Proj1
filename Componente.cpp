#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class Componente {
public:
    virtual void atualizar() = 0;
};

class Sensor : public Componente {
protected:
    float valor;
public:
    float getValor() const { return valor; }
};

class Temperatura : public Sensor {
public:
    void atualizar() override {
        valor = (rand() % 351) / 10.0; // Valores entre 0.0 e 35.0
    }
};

class Luminosidade : public Sensor {
public:
    void atualizar() override {
        valor = rand() % 1001; // Valores entre 0 e 1000
    }
};

class Umidade : public Sensor {
public:
    void atualizar() override {
        valor = rand() % 101; // Valores entre 0 e 100
    }
};

class Atuador : public Componente {
protected:
    bool estado;
public:
    bool getEstado() const { return estado; }
};

class Ventilador : public Atuador {
public:
    void atualizar() override {
        estado = rand() % 2; // Liga ou desliga
    }
};

class Umidificador : public Atuador {
public:
    void atualizar() override {
        estado = rand() % 2; // Liga ou desliga
    }
};

class Desumidificador : public Atuador {
public:
    void atualizar() override {
        estado = rand() % 2; // Liga ou desliga
    }
};

class Lampada : public Atuador {
public:
    void atualizar() override {
        estado = rand() % 2; // Liga ou desliga
    }
};