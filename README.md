# 🦾 Controle de Braço Robótico com Arduino e Flask

Este projeto foi desenvolvido para a disciplina **Projeto Integrado de Computação 2** e consiste em um **sistema de controle de braço robótico de 6 graus de liberdade**, utilizando **Arduino, servomotores, um sensor magnético QMC5883L e uma interface web desenvolvida em HTML/CSS/JavaScript com backend em Flask (Python)**.  

O objetivo principal é permitir que o usuário **controle remotamente cada articulação do braço robótico** através de um navegador, enviando os ângulos desejados em tempo real para o Arduino, que aciona os servos correspondentes.

---

## ⚙️ Funcionalidades

- Interface web com **sliders interativos** para movimentar cada servo (1 a 6).
- Comunicação em **tempo real** entre a página e o Arduino via Flask.
- Movimentação suave dos servos conforme ângulos escolhidos.
- Integração com **sensor QMC5883L (sensor magnético)** para controle de pressão da garra.
- Estrutura modular com separação de:
  - **Frontend** (HTML/CSS/JS) → interface do usuário.
  - **Backend** (Flask/Python) → controle e envio de comandos.
  - **Arduino** (C++) → interpretação e execução dos comandos nos servos.

---

## 🛠️ Tecnologias Utilizadas

- **Hardware:**
  - Arduino Uno
  - 3 Servomotores sg90
  - 3 Servomotores mg991r
  - Sensor QMC5883L
  - Fonte de alimentação externa para os servos
  - Protoboard e jumpers
  - Braço em impressão 3d.

- **Software:**
  - Python 3 + Flask
  - HTML5, CSS3, JavaScript
  - Arduino IDE (linguagem C/C++)

---

## 📂 Estrutura do Projeto
projeto-braco-robotico/
│
├── backend/
│ └── app.py # Servidor Flask (comunicação com Arduino)
│
├── frontend/
│ └── index.html # Interface web (sliders para controle dos servos)
│
├── arduino/
│ └── arduino.ino # Código Arduino (controle dos servos + leitura QMC5883L)
│
└── README.md # Documentação do projeto


---

## 🚀 Como Executar

### 1. Arduino
- Conecte os servos às portas definidas no código (`3, 5, 6, 9, 10, 11`).
- Conecte o sensor QMC5883L via I2C.
- Faça o upload do código `arduino.ino` no Arduino usando a **IDE Arduino**.

### 2. Servidor Flask
- Instale as dependências:
  ```bash
  pip install flask pyserial
  
Edite a porta serial no arquivo app.py (exemplo: COM6 no Windows, /dev/ttyUSB0 no Linux).

Execute o servidor: Na raiz do projeto
python backend/app.py

O servidor rodará em http://localhost:5000.

3. Interface Web

Abra o navegador e acesse http://localhost:5000.

Use os sliders para movimentar cada servo em tempo real.

📊 Resultados Esperados

Controle intuitivo do braço via interface web.

Movimentação coordenada dos 6 servos.

Controle de pressão da garra pelo sensor QMC5883L.

Sistema modular que pode ser expandido para integração com visão computacional ou controle automático.

📸 Demonstração

👥 Equipe

Alunos: Alexsander Barbosa Moura, Elder, Guilherme, José Vitor Zorzal

Orientadores: Prof. Rodolfo da Silva Villaca, Prof. Ricardo Carminati de Mello.

Disciplina: Projeto Integrado de Computação 2

📌 Conclusão

Este projeto demonstrou a aplicação prática de conceitos de:

Programação embarcada (Arduino + C++).

Desenvolvimento web (HTML, CSS, JavaScript).

Integração de sistemas (Flask + Serial).

Controle de hardware em tempo real.

O resultado é um protótipo funcional de braço robótico controlado remotamente, com potencial para ser expandido em aplicações como robótica educacional, automação e manipulação remota.
