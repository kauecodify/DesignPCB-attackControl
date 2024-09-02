<img src="https://github.com/user-attachments/assets/3827b09c-b50e-416d-8ae0-fb8c5db0bc8f" alt="Imagem" width="70" />

![photo](warface.png) 

# DesignPCB-attackControl 

# Controle remoto de ataque

Este projeto é um carrinho de controle remoto que possui um mecanismo de tiro integrado. O carrinho é controlado por um microcontrolador e utiliza uma placa de circuito impresso (PCB) personalizada para conectar todos os componentes eletrônicos necessários.

## Visão Geral

- **Microcontrolador**: Utiliza um microcontrolador Arduino Nano (ou equivalente) para controle geral.
- **Motorização**: Inclui motores DC para movimentação do carrinho.
- **Mecanismo de Tiro**: Um servomotor aciona um mecanismo de tiro.
- **Aplicação de Reconhecimento do solo e inimigo via sensores e IA/ML**
- **Controle Remoto**: Comunicação via RF com um receptor e transmissor RF.
- **Componentes**: Sensores (opcionais), botões e LEDs para controle manual e feedback.

## Componentes Necessários

- **Microcontrolador**: Arduino Nano, ESP32 ou similar.
- **Driver de Motor**: L298N ou similar.
- **Motores DC**: Para movimentação do carrinho.
- **Servomotores**: Para o mecanismo de tiro.
- **Receptor RF e Transmissor RF**: Para controle remoto.
- **Sensores**: Opcional, para detectar obstáculos.
- **Fonte de Energia**: Baterias recarregáveis (Li-Po ou NiMH) e regulador de tensão.
- **Botões e LEDs**: Para controle manual e indicação de status.
- **Fios e Conectores**: Para conexões elétricas.

## Configuração do Projeto

### Design da Placa de Circuito Impresso (PCB)

![Schematic_WarFace_2024-08-29](https://github.com/user-attachments/assets/59082ecc-9874-46ca-9529-d90940d6093e)

Pt2 >> Foi utilizado ESP32 para transmissão de dados ao servomotor, visando disparo, verificação do solo via sensores e as rodas com o drive de motor L298N usado para controlar velocidade e direção dos motores DC.

![WarMachine](https://github.com/user-attachments/assets/cb8b174b-0b17-4c8a-8499-37f0a811c553)

### 3. Sensores e armamento em breve...

## Licença

Este projeto é licenciado sob a [Licença MIT](LICENSE).
