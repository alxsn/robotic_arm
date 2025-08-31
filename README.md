# 🦾 Controle de Braço Robótico com Arduino e Flask

Este projeto foi desenvolvido para a disciplina **Projeto Integrado de Computação** e consiste em um **sistema de controle de braço robótico de 6 graus de liberdade**, utilizando **Arduino, servomotores, um sensor magnético QMC5883L e uma interface web desenvolvida em HTML/CSS/JavaScript com backend em Flask (Python)**.  

O objetivo principal é permitir que o usuário **controle remotamente cada articulação do braço robótico** através de um navegador, enviando os ângulos desejados em tempo real para o Arduino, que aciona os servos correspondentes.

---

## ⚙️ Funcionalidades

- Interface web com **sliders interativos** para movimentar cada servo (1 a 6).
- Comunicação em **tempo real** entre a página e o Arduino via Flask.
- Movimentação suave dos servos conforme ângulos escolhidos.
- Integração com **sensor QMC5883L (bússola digital)** para leitura de orientação espacial.
- Estrutura modular com separação de:
  - **Frontend** (HTML/CSS/JS) → interface do usuário.
  - **Backend** (Flask/Python) → controle e envio de comandos.
  - **Arduino** (C++) → interpretação e execução dos comandos nos servos.

---

## 🛠️ Tecnologias Utilizadas

- **Hardware:**
  - Arduino Uno/Nano
  - 6 Servomotores
  - Sensor QMC5883L
  - Fonte de alimentação externa para os servos
  - Protoboard e jumpers

- **Software:**
  - Python 3 + Flask
  - HTML5, CSS3, JavaScript
  - Arduino IDE (linguagem C/C++)

---

## 📂 Estrutura do Projeto

